#include "main.h"

/**
 * _putchar - function that print charactor
 * @args: arguments
 * Return: 1
*/

int _putchar(va_list args)
{
    char c = va_arg(args, int);
    write(1, &c, 1);

    return (1);
}
