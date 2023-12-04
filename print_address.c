#include "main.h"

/**
 * print_address - function that print address
 * @args: arguments
 * Return: length of the address
*/

int print_address(va_list args)
{
    void *ptr = va_arg(args, void*);
    uintptr_t back_up_num;
    char HEXA_range[] = "0123456789abcdef";
    char buffer[BUFFER_SIZE];
    int i = 0, length;

    if (ptr == NULL)
    return (print_buffer("(nil)"));

    back_up_num = (uintptr_t)ptr;
    while (back_up_num > 0)
    {
        buffer[i] = HEXA_range[(back_up_num % 16)];
        back_up_num /= 16;
        i++;
    }
    buffer[i] = 'x';
    buffer[++i] = '0';
    buffer[++i] = '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return (length);
}
