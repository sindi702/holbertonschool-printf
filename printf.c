#include <stdarg.h>
#include "main.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list arg;
	const char *ptr;

	va_start(arg, format);

	for (ptr = format; *ptr ; ptr++)
	{
		if (*ptr == '%' && *(ptr + 1) == '%')
		{
			_putchar('%');
			counter++;
			continue;
		}
		else if (*ptr == '%' && *(ptr + 1) != '%')
		{
			switch(*++ptr)
			{
				case 'c':
					counter += p_char(arg);
					break;
				case 's':
					counter += p_str(arg);
					break;
				case '%':
					_putchar('%');
					counter++;
					break;
				case '\0':
					return(counter);

				default:
					_putchar('%');
					_putchar(*ptr);
					counter += 2;
			}
		}
		else
		{
			if (ptr == NULL)
				return (0);
			_putchar(*ptr);
			counter++;
		}
	}
	va_end(arg);
	return (counter);
}
