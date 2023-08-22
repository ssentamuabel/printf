#ifndef MAIN_H
#define MAIN_H

/* header */
#include<stdarg.h>
#include<stdlib.h>
typedef struct placeholder
{
	char cha;
	int (*func)(va_list list);
} holder;



/* function prototype */
int _printf(const char *format, ...);
int print_args(const char *format, va_list list);
int _putchar(char c);
int _puts(char *str);
int print_d(va_list list);
int print_i(va_list list);
int edgetest(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
#endif
