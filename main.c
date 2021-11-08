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
    char a[] = "Hola";
    int len;
    int len2;


    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "1234");
    printf("String:[%s]\n", "1234");

    _printf("string vacia %s\n","");
    printf("string vacia %s\n", "");

    _printf("Percent 3:[%%%]\n");
    /*printf("Percent 3:[%%%]\n");*/

    _printf("%sc%1\n");
    printf("%sc%1\n");

    _printf("%s\n", a);
    printf("%s\n", a);

    _printf("nulo %\n");
    printf("nulo %\n");

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);


    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");

    _printf("Number with d:[%d]\n", 1234);
    printf("Number with d:[%d]\n", 1234);

     _printf("Number with i:[%i]\n", 1234);
    printf("Number with i:[%i]\n", 1234);
   
    return (0);
}
