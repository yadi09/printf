#include "main.h"

/**
 * print_unsigned - function that print unsigned int
 * @args: argument
 * Return: length of the number 
*/

int print_unsigned(va_list args)
{
    unsigned int num;
    char buffer[BUFFER_SIZE];
    int i = 0, length;

    if (add.length_modifier_long)
        num = va_arg(args, unsigned long);
    else if (add.length_modifier_short)
    {
        num = (unsigned short)va_arg(args, unsigned int);
    }
    else
        num = va_arg(args, unsigned int);

    if (num == 0)
	{
		_printf("0");
		return (1);
	}

    while (num > 0)
    {
        buffer[i] = (num % 10) + '0';
        num /= 10;
        i++;
    }

    buffer[i] = '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return (length);
}
