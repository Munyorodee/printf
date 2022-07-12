#ifndef MAINH
#define MAINH

#include <stdarg.h>

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
