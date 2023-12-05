#include "main.h"

/**
 * _putchar - function that print charactor
 * @args: arguments
 * Return: 1
*/

int _putchar(va_list args)
{
    char c = va_arg(args, int);
    add.num -= (1);
    while (add.num > 0)
    {
        write(1, " ", 1);
        add.num--;
    }
    add.mult = 1;
    add.num = 0;
    write(1, &c, 1);

    return (1);
}
