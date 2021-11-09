#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;
	char *string;

	a = 10;
	b = 20;
	c = -50;
	string = "Hello world!";

	_printf("This is my string: %s\n", string);
	_printf("This is a [%d], and this is b [%d]\n", a, b);
	_printf("This is c %d, and c is negative\n", c);
	_printf("This is a single Character:[%c]\n", 'J');

    return (0);
}
