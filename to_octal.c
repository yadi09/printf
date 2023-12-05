#include "main.h"

/**
 * to_octal - function that convert to octal
 * @args: arguments
 * Return: length
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
    if (add.hash)
    buffer[i++] = '0';
    buffer[i] = '\0';
    str_rev(buffer);

    add.num -= (i);
    while (add.num > 0)
    {
        write(1, " ", 1);
        add.num--;
    }
    add.mult = 1;
    add.num = 0;
    length = print_buffer(buffer);

    return (length);
}
