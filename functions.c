#include "main.h"
/**
 *  print_char - prints the character
 *  @list: the list of the variadic value
 *
 *  Return: int
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	return (_putchar(c));
}
/**
 *  print_string - prints the string
 *  @list: the list of the variadic fuction
 *
 *  Return: int
 */
int print_string(va_list list)
{
	char *str = va_arg(list, char *);

	return (_puts(str));
}
