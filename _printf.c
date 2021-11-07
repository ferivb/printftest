#include "main.h"

/**
  *
  */
int _printf(const char *format, ...)
{
	va_list list;

	print_s spec[] = {
		{"c", format_char};
		{"s", format_string};
		{"%", format_percent};
		{NULL, NULL}};

	int i = 0;

	for (; f[i] != '\0'; i++)
	{
		if (f[i] != '%')
		{
			_write(f[i]);
		}
		else if (f[i + 1] != '%')
		{

