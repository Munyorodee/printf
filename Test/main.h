#ifndef MAINH
#define MAINH

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);

/**
 * struct code_format - Struct format function
 *
 * @sc: The specifiers
 * @f: The function associated
 */
typedef struct code_format
{
  char *sc;
  int (*f)(va_list);
} code_f;

#endif
