#include "main.h"

/**
  *
  */
int _printf(const char *format, ...)
{
	int final_print;

	va_list info;

	print_s spec[] = {
		{"c", format_char},
		{"s", format_string},
		{"%", format_percent},
		{NULL, NULL},};

	if (format == NULL)
	{
		return (-1);
	}
	va_start (info, format);
	final_print = get_funk(format, spec, info);
	va_end (info);
	return (final_print);
}
