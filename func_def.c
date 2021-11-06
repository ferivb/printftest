#include "main.h"

/**
 * format_char - Prints a char.
 * @c: list of arguments.
 * Return: The amount of chars entered.
 */

int format_char(va_list c)
{
	_write(va_arg(c, int));
	return (1);
}

/**
 * format_string - Prints a string
 * @s: list of arguments
 * Return: The string.
 */

int format_string(va_list s)
{
	int i = 0;
	char *s;

	s = (va_arg(s, char*))

	if (s == NULL)
		s = "(null)";
	for (; s[i] != '\0'; i++)
	{
		_write(s[i]);
	}
	return (i);
}

/**
 * format_percent - Prints a porcent
 * @percent: List of arguments
 * Return: the string
 */

int format_percent(va_list percent)
{
	void(percent);

	_write('%');
	return (1);
}
