#include "main.h"

/**
 * to_lower_hexa - function that convert to hexa in lower
 * @args: arguments
 * Return: length
*/

int to_lower_hexa(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    unsigned int back_up_num = num;
    char hexa_range[] = "0123456789abcdef";
    char buffer[1024];
    int i = 0, length;

    if (back_up_num == 0)
	{
		_printf("0");
		return (1);
	}
    
    while (back_up_num > 0)
    {
        buffer[i] = hexa_range[(back_up_num % 16)];
        back_up_num /= 16;
        i++;
    }
    if (add.hash)
    {
    buffer[i++] = 'x';
    buffer[i++] = '0';
    }
    buffer[i] = '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return (length);
}
