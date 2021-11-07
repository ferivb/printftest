#include "main.h"

/**
  *
  */
int _printf(const char *format, ...)
{
	va_list info;

	print_s spec[] = {
		{"c", format_char};
		{"s", format_string};
		{"%", format_percent};
		{NULL, NULL}};

	int i = 0;

