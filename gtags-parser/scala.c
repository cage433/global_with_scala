/*
 * Copyright (c) 2010 Quincy Liang
 *
 * This file is part of GNU GLOBAL.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <ctype.h>
#include <stdio.h>
#ifdef STDC_HEADERS
#include <stdlib.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#else
#include <strings.h>
#endif

#include "gctags.h"
#include "defined.h"
#include "die.h"
#include "strlimcpy.h"
#include "token.h"
#include "scala_res.h"

#define MAXCOMPLETENAME 1024            /* max size of complete name of class */
#define MAXCLASSSTACK   100             /* max size of class stack */

/*
 * scala: read scala file and pickup tag entries.
 */
void
scala(const char *file)
{
	int c;
	int level;					/* brace level */
	int target;
	int startclass, startthrows, startequal;
	char classname[MAXTOKEN];
	char completename[MAXCOMPLETENAME];
	int classlevel;
	struct {
		char *classname;
		char *terminate;
		int level;
	} stack[MAXCLASSSTACK];
	const char *interested = "{}=;";

	*classname = *completename = 0;
	stack[0].classname = completename;
	stack[0].terminate = completename;
	stack[0].level = 0;
	level = classlevel = 0;
	target = (sflag) ? SYM : ((rflag) ? REF : DEF);
	startclass = startthrows = startequal = 0;

	if (!opentoken(file))
		die("'%s' cannot open.", file);
	crflag = 1;
	scalamode = 1;

	while ((c = nexttoken(interested, scala_reserved_word)) != EOF) {
		switch (c) {
		case SYMBOL:					/* symbol */
/* 			for (; c == SYMBOL && peekc(1) == '.'; c = nexttoken(interested, scala_reserved_word)) { */
/* 				if (target == SYM) */
/* 					PUT(token, lineno, sp); */
/* 			} */
/* 			if (c != SYMBOL) */
/* 				break; */
/* 			if (startclass || startthrows) { */
/* 				if (target == REF && defined(token)) */
/* 					PUT(token, lineno, sp); */
/* 			} else if (peekc(0) == '('/\* ) *\/) { */
/* 				if (target == DEF && level == stack[classlevel].level && !startequal) */
/* 					/\* ignore constructor *\/ */
/* 					if (strcmp(stack[classlevel].classname, token)) */
/* 						PUT(token, lineno, sp); */
/* 				if (target == REF && (level > stack[classlevel].level || startequal) && defined(token)) */
/* 					PUT(token, lineno, sp); */
/* 			} else { */
/* 				if (target == SYM) */
/* 					PUT(token, lineno, sp); */
/* 			} */
			if (target == SYM)
				PUT(token, lineno, sp);
			break;
		case '{': /* } */
			DBG_PRINT(level, "{");	/* } */

			++level;
			if (startclass) {
				char *p = stack[classlevel].terminate;
				char *q = classname;

				if (++classlevel >= MAXCLASSSTACK)
					die("class stack over flow.[%s]", curfile);
				if (classlevel > 1)
					*p++ = '.';
				stack[classlevel].classname = p;
				while (*q)
					*p++ = *q++;
				stack[classlevel].terminate = p;
				stack[classlevel].level = level;
				*p++ = 0;
			}
			startclass = startthrows = 0;
			break;
			/* { */
		case '}':
			if (--level < 0) {
				if (wflag)
					warning("missing left '{' (at %d).", lineno); /* } */
				level = 0;
			}
			if (level < stack[classlevel].level)
				*(stack[--classlevel].terminate) = 0;
			/* { */
			DBG_PRINT(level, "}");
			break;
		case '=':
			startequal = 1;
			break;
		case ';':
		case '\n':
			startclass = startthrows = startequal = 0;
			break;
		case SCALA_DEF:
		case SCALA_VAR:
		case SCALA_VAL:
			if ((c = nexttoken(interested, scala_reserved_word)) == SYMBOL) {
				if (target == DEF)
					PUT(token, lineno, sp);				
			}			
			break;
		case SCALA_CLASS:
		case SCALA_TRAIT:
			if ((c = nexttoken(interested, scala_reserved_word)) == SYMBOL) {
				strlimcpy(classname, token, sizeof(classname));
				startclass = 1;
				if (target == DEF)
					PUT(token, lineno, sp);
			}
			break;
		case SCALA_NEW:
/* 			while ((c = nexttoken(interested, scala_reserved_word)) == SYMBOL && peekc(1) == '.') */
/* 				if (target == SYM) */
/* 					PUT(token, lineno, sp); */
/* 			if (c == SYMBOL) */
/* 				if (target == REF && defined(token)) */
/* 					PUT(token, lineno, sp); */
			break;
		case SCALA_THROW:
			startthrows = 1;
			break;
		default:
			break;
		}
	}
	closetoken();
}
