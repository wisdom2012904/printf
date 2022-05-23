#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED


#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flag - struct containing flags 
 * which are "turned on"
 * when a flag specifier is passed to _printf()
 * @plus: '+' character flag
 * @space: ' ' character flag
 * @hash: '#'character flag
 */

typedef struct flags

{

int plus;

int space;

int hash;

} flags_t;

typedef struct printManager

{

char c;

int (*f)(va_list ap, flags_t *f);

} pm;


/* _printf */

int _printf(const char *format, ...);


/* get_print */

int (*get_print(char s))(va_list, flags_t *);


/* get_flag */

int get_flag(char s, flags_t *f);


#endif
