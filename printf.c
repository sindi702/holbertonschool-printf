#include <stdarg.h>
#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * print_char - function to print char
 * @cha: argument char to print
 * Return: len of 1
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;

	va_start(args, format);

	while ((c = *format++) != '\0')
	{
		if(c == '%')
		{
			c = *format++;
		}
		if (c == 'c')
		{
			int arg = va_arg(args, int);
			putchar(arg);
			count++;
		}
		else if (c == 's')
		{
			char *arg = va_arg(args, char *);
			while (*arg != '\0')
			{
				putchar(*arg++);
				count++;
			}
		}
		else if (c == '%')
		{
			putchar('%');
			count++;
		}
	}
	va_end(args);
	return count;
}

