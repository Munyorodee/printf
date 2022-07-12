#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_percent -  print percent character
 * @args: char
 * Return: percent character
 */

int print_perc(va_list args __attribute__((unused)))
{
	return (_putchar('%'));
}
