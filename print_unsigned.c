#include "main.h"

/**
 * print_unsigned - function that print unsigned int
 * @args: argument
 * Return: length of the number 
*/

int print_unsigned(va_list args)
{
    unsigned int num = (unsigned int)va_arg(args, unsigned int);
    unsigned int back_up_num = num;
    char buffer[BUFFER_SIZE];
    int i = 0, length;

    while (back_up_num > 0)
    {
        buffer[i] = (back_up_num % 10) + '0';
        back_up_num /= 10;
        i++;
    }

    buffer[i] = '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return (length);
}
