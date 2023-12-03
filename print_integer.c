#include "main.h"

/**
 * print_int - function that print integer as string
 * @args: set of arguments
 * Return: length of buffer
*/

int print_integer(va_list args)
{
    int length, i;
    char buffer[BUFFER_SIZE];
    int num = va_arg(args, int);

    if (num < 0)
    {
    num = -num;
    _printf("%c", '-');
    }
    i = 0;
    while (num > 0)
    {
        buffer[i] = (num % 10) + '0';
        num /= 10;
        i++;
    }
    buffer[i]= '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return(length);
}
