# Project _printf

## Synopsis
The **_printf** function prints an output according to the format. This function write its output to the stdout.
It returns the count of printed characters when the function is successful and -1 when the function fails.

## Usage
+ All the files are to be compiled on Ubuntu 14.04 LTS.
+ You must download all the files contained in this repository in order for this function to work.
+ To use the _printf function, create a file .c and you can use the following example to try.
**_printf("This is a test");**
+ Include the "main.h" header file on the functions using the _printf.
+ Compile your code with 'gcc -Wall -Werror -Wextra -pedantic *.c'.

## Format
The _printf function produces an output according to a format.

The available convertion specifiers are:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %%: Prints a single % sing.

## Example

```	
#include "main.h"
#include <stdio.h>
/**
 * main - Prints anything
 *
 * Return: The number of arguments printed.
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

	return(0);
}

```	

## Output

```	

This is my string: Hello world!
This is a [10], and this is b [20]
This is c -50, and c is negative
This is a single Character:[J]

```	

You can see more information consulting the **man_printf**, using this command:
**man ./man_printf**

### Authors :black_nib:

* __Felipe Rivas__

* __Ana Maria Rocha__

#### School 👨‍💻🚀

This project was made for:

<p aling="center">
<a href="https://www.holbertonschool.com" target="_blank">
<img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School"  /></a>
</p>
