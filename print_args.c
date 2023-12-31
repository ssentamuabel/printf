#include "main.h"
/**
 *  print_args - print the arguments
 *  @format: the address of the arguments
 *  @list: the variadic list that contains arguments
 *
 *  Return: the number of chaacters printed
 */
int print_args(const char *format, va_list list)
{
	int i = 0, len = 0, iterate = 0;
	char sp;

	holder holds[] = {
		{'c', print_char}, {'s', print_string},	{'%', print_percent}, {'d', print_d},
		{'i', print_i}
	};
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (edgetest(format[i + 1]) == -1)
				return (len = -1);
			sp = format[i + 1];
			iterate = 0;
			while (iterate < 3)
			{
				if (sp == holds[iterate].cha)
				{
					len += holds[iterate].func(list);
					break;
				}
				iterate++;
			}
			if (iterate == 3)
			{
				len += _putchar(format[i]);
				len += _putchar(format[i + 1]);
			}
			i += 2;
		}
		else
		{
			len += _putchar(format[i]);
			i++;
		}
	}
	return (len);
}
