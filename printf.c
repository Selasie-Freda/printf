#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: specified format
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0;

	va_list ap;
	va_start(ap, format);

	len = vprintf(format, ap);
	va_end(ap);
	return (len);
}
