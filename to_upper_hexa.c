#include "main.h"

/**
 * to_upper_hexa - function that convert to hexa upper
 * @args: arguments
 * Return: lenght
*/

int to_upper_hexa(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    unsigned int back_up_num = num;
    char HEXA_range[] = "0123456789ABCDEF";
    char buffer[BUFFER_SIZE];
    int i = 0, length;

    if (back_up_num == 0)
	{
	_printf("0");
	return (1);
	}
    while (back_up_num > 0)
    {
        buffer[i] = HEXA_range[(back_up_num % 16)];
        back_up_num /= 16;
        i++;
    }
    buffer[i] = '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return (length);
}
