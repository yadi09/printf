#include "main.h"

/**
 * 
*/

int to_octal(va_list args)
{
    unsigned int num = (unsigned int)va_arg(args, unsigned int);
    unsigned int back_up_num = num;
    char buffer[BUFFER_SIZE];
    int i = 0, length;

    while (back_up_num > 0)
    {
        buffer[i] = (back_up_num % 8) + '0';
        back_up_num /= 8;
        i++;
    }
    buffer[i] = '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return (length);
}