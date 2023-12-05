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
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)(uintptr_t)0x637541f0;
    _printf("Length:[%3d, %0i]\n", len2, len2);
    printf("Length:[%3d, %0i]\n", len2, len2);
    _printf("Negative:[%+10d]\n", -762534);
    printf("Negative:[%+10d]\n", -762534);
    _printf("Unsigned:[%11u]\n", ui);
    printf("Unsigned:[%11u]\n", ui);
    _printf("Unsigned octal:[%#o]\n", ui);
    printf("Unsigned octal:[%#o]\n", ui);
    _printf("Unsigned hexadecimal:[%#15x, %#15X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%#15x, %#15X]\n", ui, ui);
    _printf("Character:[%5c]\n", 'H');
    printf("Character:[%5c]\n", 'H');
    _printf("String:[%20s]\n", "I am a string !");
    printf("String:[%20s]\n", "I am a string !");
    _printf("Address:[%11p]\n", addr);
    printf("Address:[%11p]\n", addr);
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    len = _printf("Len:[%d]\n", len);
    len2 = printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n", "Yadamzer");
    /*printf("Unknown:[%r]\n");*/

    _printf("%b\n", 98);
    _printf("%S\n", "Best\nSchool");
    _printf("[%R]\n", "Yadamzer");
    _printf("pluse [%+d]\n", 30);
    _printf("%hd\n", 1533464565);
    printf("%hd", 1533464565);


    return (0);
}
