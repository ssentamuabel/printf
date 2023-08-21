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
	int i = 0;
	int len  = 0;
	char sp;
	int iterate = 0;

	holder holds[] = {
		{'c', print_char},
		{'s', print_string}
	};

	while (format[i])
	{
		if (format[i] == '%')
		{
			sp = format[i + 1];
			iterate = 0;
			while (iterate < 2)
			{
				if (sp == holds[iterate].cha)
				{
					len += holds[iterate].func(list);
					break;
				}
				iterate++;
			}
			if (iterate == 2)
			{
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