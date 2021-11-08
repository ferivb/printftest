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
	int i = 0, dec_chars = 0;
	char holder[1024];

	if (num == 0)
	{
		_write('0');
		return (dec_chars = 1);
	}
	if (num < 0)
	{
		_write('-');
		dec_chars += 1;
		num = num * -1;
	}
	for (; num >= 1; dec_chars++, i++)
	{
		holder[i] = ((num % 10) + 48);
		num = num / 10;
	}
	for (i = i - 1; i > -1; i--)
	{
		_write(holder[i]);
	}
	return (dec_chars);
}
