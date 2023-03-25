#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: string to print
 * Return: Number of characters printed
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
