#include "main.h"

/**
 * print_buffer - function that print buffer
 * @buffer: number as string
 * Return: length of buffer
*/

int print_buffer(char *buffer)
{
    int length;
    int total = 0, max_bytes;

    if (buffer == NULL)
    return (-1);
    
    while (add.num > 0)
    {
        write(1, " ", 1);
        add.num--;
    }
    add.mult = 1;
    add.num = 0;

    length = strlen(buffer);
    while (total < length)
    {
        max_bytes = write(1, (buffer + total), (length - total));
        if (max_bytes < 0)
        return (-1);

        total += max_bytes;
    }

    return (length);
}
