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
    
    _printf("Copiamos esta chimbada\n");
    printf("somos bobos\n");

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "1234");
    printf("String:[%s]\n", "1234");

    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");

    _printf("Number with d:[%d]\n", 1234);
    printf("Number with d:[%d]\n", 1234);

     _printf("Number with i:[%i]\n", 1234);
    printf("Number with i:[%i]\n", 1234);
   
    return (0);
}
