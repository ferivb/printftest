#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>

typedef struct my_printf
{
	char *name;
	int (*f)(va_list);
}print_s;

int _printf(const char *format, ...);
int _write(char c);

#endif
