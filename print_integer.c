#include "main.h"

/**
 * print_int - function that print integer as string
 * @args: set of arguments
 * Return: length of buffer
*/

int print_integer(va_list args)
{
    int length, i, back_up_num;
    char buffer[BUFFER_SIZE];
    int num = (int)va_arg(args, int);

    back_up_num = num;
    if (back_up_num < 0)
    back_up_num = -back_up_num;

    i = 0;
    while (back_up_num/10)
    {
        buffer[i] = (back_up_num % 10) + '0';
        back_up_num /= 10;
        i++;
    }
    buffer[i] = back_up_num + '0';
    if (num < 0)
    buffer[++i] = '-';

    buffer[++i]= '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return(length);
}