/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: gperf --language=ANSI-C --struct-type --slot-name=name --hash-fn-name=scala_hash --lookup-fn-name=scala_lookup scala_res.gpf  */
/* Computed positions: -k'1,3' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "scala_res.gpf"

#include "strmake.h"
#define START_VARIABLE	1001
#define START_WORD	2001
#define START_SHARP	3001
#define START_YACC	4001
#define IS_RESERVED_WORD(a)	((a) >= START_WORD)
#define IS_RESERVED_VARIABLE(a)	((a) >= START_VARIABLE && (a) < START_WORD)
#define IS_RESERVED_SHARP(a)	((a) >= START_SHARP && (a) < START_YACC)
#define IS_RESERVED_YACC(a)	((a) >= START_YACC)

#define SCALA_ABSTRACT	2001
#define SCALA_CASE	2002
#define SCALA_CLASS	2003
#define SCALA_CATCH	2004
#define SCALA_DEF	2005
#define SCALA_DO	2006
#define SCALA_ELSE	2007
#define SCALA_EXTENDS	2008
#define SCALA_FINAL	2009
#define SCALA_FINALLY	2010
#define SCALA_FOR	2011
#define SCALA_FORSOME	2012
#define SCALA_IF	2013
#define SCALA_IMPLICIT	2014
#define SCALA_IMPORT	2015
#define SCALA_LAZY	2016
#define SCALA_NEW	2017
#define SCALA_MATCH	2018
#define SCALA_MIXIN	2019
#define SCALA_OBJECT	2020
#define SCALA_OVERRIDE	2021
#define SCALA_PACKAGE	2022
#define SCALA_PRIVATE	2023
#define SCALA_PROTECTED	2024
#define SCALA_REQUIRES	2025
#define SCALA_RETURN	2026
#define SCALA_SEALED	2027
#define SCALA_SUPER	2028
#define SCALA_THIS	2029
#define SCALA_THROW	2030
#define SCALA_TRAIT	2031
#define SCALA_TRY	2032
#define SCALA_TYPE	2033
#define SCALA_VAL	2034
#define SCALA_VAR	2035
#define SCALA_WITH	2036
#define SCALA_WHILE	2037
#define SCALA_YIELD	2038
#define SCALA_TRUE	2039
#define SCALA_FALSE	2040
#define SCALA_NULL	2041
#line 54 "scala_res.gpf"
struct keyword { char *name; int token; };

#define TOTAL_KEYWORDS 41
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 9
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 58
/* maximum key range = 57, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
scala_hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 15, 59, 10,
       0, 15,  5, 59, 59,  5,  0, 59,  0, 40,
      25, 30,  0, 15, 20,  0,  0, 40, 15, 30,
      10, 30, 20, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59, 59, 59, 59, 59,
      59, 59, 59, 59, 59, 59
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct keyword *
scala_lookup (register const char *str, register unsigned int len)
{
  static struct keyword wordlist[] =
    {
      {""}, {""},
#line 61 "scala_res.gpf"
      {"do", SCALA_DO},
      {""},
#line 88 "scala_res.gpf"
      {"type", SCALA_TYPE},
#line 83 "scala_res.gpf"
      {"super", SCALA_SUPER},
      {""},
#line 68 "scala_res.gpf"
      {"if", SCALA_IF},
#line 60 "scala_res.gpf"
      {"def", SCALA_DEF},
#line 84 "scala_res.gpf"
      {"this", SCALA_THIS},
#line 95 "scala_res.gpf"
      {"false", SCALA_FALSE},
#line 70 "scala_res.gpf"
      {"import", SCALA_IMPORT},
#line 78 "scala_res.gpf"
      {"private", SCALA_PRIVATE},
#line 69 "scala_res.gpf"
      {"implicit", SCALA_IMPLICIT},
#line 57 "scala_res.gpf"
      {"case", SCALA_CASE},
#line 59 "scala_res.gpf"
      {"catch", SCALA_CATCH},
      {""},
#line 77 "scala_res.gpf"
      {"package", SCALA_PACKAGE},
#line 89 "scala_res.gpf"
      {"val", SCALA_VAL},
#line 62 "scala_res.gpf"
      {"else", SCALA_ELSE},
#line 86 "scala_res.gpf"
      {"trait", SCALA_TRAIT},
#line 82 "scala_res.gpf"
      {"sealed", SCALA_SEALED},
#line 63 "scala_res.gpf"
      {"extends", SCALA_EXTENDS},
#line 56 "scala_res.gpf"
      {"abstract", SCALA_ABSTRACT},
#line 71 "scala_res.gpf"
      {"lazy", SCALA_LAZY},
#line 85 "scala_res.gpf"
      {"throw", SCALA_THROW},
#line 81 "scala_res.gpf"
      {"return", SCALA_RETURN},
      {""},
#line 66 "scala_res.gpf"
      {"for", SCALA_FOR},
#line 96 "scala_res.gpf"
      {"null", SCALA_NULL},
#line 58 "scala_res.gpf"
      {"class", SCALA_CLASS},
      {""},
#line 67 "scala_res.gpf"
      {"forSome", SCALA_FORSOME},
#line 87 "scala_res.gpf"
      {"try", SCALA_TRY},
#line 91 "scala_res.gpf"
      {"with", SCALA_WITH},
#line 64 "scala_res.gpf"
      {"final", SCALA_FINAL},
#line 75 "scala_res.gpf"
      {"object", SCALA_OBJECT},
#line 65 "scala_res.gpf"
      {"finally", SCALA_FINALLY},
#line 90 "scala_res.gpf"
      {"var", SCALA_VAR},
#line 79 "scala_res.gpf"
      {"protected", SCALA_PROTECTED},
#line 92 "scala_res.gpf"
      {"while", SCALA_WHILE},
      {""}, {""},
#line 80 "scala_res.gpf"
      {"requires", SCALA_REQUIRES},
#line 94 "scala_res.gpf"
      {"true", SCALA_TRUE},
#line 73 "scala_res.gpf"
      {"match", SCALA_MATCH},
      {""}, {""}, {""}, {""},
#line 93 "scala_res.gpf"
      {"yield", SCALA_YIELD},
      {""}, {""},
#line 76 "scala_res.gpf"
      {"override", SCALA_OVERRIDE},
      {""},
#line 74 "scala_res.gpf"
      {"mixin", SCALA_MIXIN},
      {""}, {""},
#line 72 "scala_res.gpf"
      {"new", SCALA_NEW}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = scala_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 97 "scala_res.gpf"

int
scala_reserved_word(const char *str, int len)
{
	struct keyword *keyword;

	keyword = scala_lookup(str, len);
	return (keyword && IS_RESERVED_WORD(keyword->token)) ? keyword->token : 0;
}
