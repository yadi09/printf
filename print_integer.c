#include "main.h"

/**
 * print_int - function that print integer as string
 * @args: set of arguments
 * Return: length of buffer
*/

int print_integer(va_list args)
{
    int length, i, num, back_up_num;
    char buffer[BUFFER_SIZE];
    if (add.length_modifier_long)
    {
        long int long_num = va_arg(args, long int);
        num = (int)long_num;
    }
    else if (add.length_modifier_short)
    {
        short int short_num = (short int)va_arg(args, int);
        num = (int)short_num;
    }
    else
    {
        num = va_arg(args, int);
    }
    
    back_up_num = num;
    if (back_up_num < 0)
    {
        if (back_up_num == SHRT_MIN)
        {
            length = print_buffer(MIN_SHRT_STR);
            return (length);
        }
        else if (back_up_num == INT_MIN)
        {
            length = print_buffer(MIN_INT_STR);
            return(length);
        }
    back_up_num = -back_up_num;
    }

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
    else if (add.plus)
    buffer[++i] = '+';
    else if (add.space)
    buffer[++i] = ' ';

    buffer[++i]= '\0';
    str_rev(buffer);
    length = print_buffer(buffer);

    return(length);
}
