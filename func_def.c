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
	char *sm;

	sm = va_arg(s, char*);

	if (sm == NULL)
		sm = "(null)";
	for (; sm[i] != '\0'; i++)
	{
		_write(sm[i]);
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
	(void)percent;

	_write('%');
	return (1);
}

/**
  * format_decimal - prints decimal and ints
  * @num: number provided
  * Return: amount of chars added
  */
int format_decimal(va_list num)
{
	int final_print;

	final_print= _writenum(num);
	return (final_print);
}