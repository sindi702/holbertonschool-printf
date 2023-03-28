#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

typedef struct print_struct
{
	char *f_type;
	int (*print)(va_list print);
} print_t;
int p_char(va_list list);
int p_str(va_list list);
int p_int(va_list list);
int p_float(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
