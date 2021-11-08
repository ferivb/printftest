#include "main.h"

/**
 * _writenum - prints a number
 * @number: Argument
 * Return: The number of arguments
 */
int _writenum(va_list number)
{
	int i;
	int div;
	int final_print;
	unsigned int num;

	i  = va_arg(number, int);
	div = 1;
	final_print = 0;

	if (i < 0)
	{
		final_print += _write('-');
		num = i * -1;
	}
	else
		num = i;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		final_print += _write(48 + num / div);
		num %= div;
		div /= 10;
	}

	return (final_print);
}
