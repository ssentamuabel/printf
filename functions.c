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

	if (str == NULL)
		str = "(null)";

	return (_puts(str));
}
/**
 *  edgetest - to test the next character
 *  @c: the character to test
 *
 *  Return: int
 */
int edgetest(char c)
{
	if (c == ' ' || c == '\0')
		return (-1);
	return (1);
}
/**
 *  print_percent - prints the percentage
 *  @list: the list
 *
 *  Return: int
 */
int print_percent(va_list list)
{
	(void)list;

	return (_putchar('%'));
}
