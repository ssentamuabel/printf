#include "main.h"
/**
 *  _printf - prints the arguments to stdout
 *  @format: the address of the arguments
 *
 *  Return: int the number of values
 */
int _printf(const char *format, ...)
{
	va_list list;
	int total = 0;

	va_start(list, format);

	total = print_args(format, list);

	va_end(list);

	return (total);
}
