#include "main.h"


/**
 * print_char - function that print char
 * @c: charactor
 * Return: 1
*/

int print_char(char c)
{
    write(1, &c, 1);

    return (1);
}


/**
 * to_up_hex - function that convert to upper hexa
 * @num: number
 * Return: length
*/

int to_up_hex(unsigned int num)
{
    char HEXA_range[] = "0123456789ABCDEF";
    char buffer[BUFFER_SIZE];
    int i = 0, length;

    while (num > 0)
    {
        buffer[i] = HEXA_range[(num % 16)];
        num /= 16;
        i++;
    }
    buffer[i] = '\0';
    str_rev(buffer);

    length = print_buffer(buffer);

    return (length);
}


/**
 * print_String - function that print string
 * @args: arguments
 * Return: length
*/

int print_String(va_list args)
{
    char *str = (char*)va_arg(args, char*);
    int i, length = 0;
    unsigned int ASCII_Value;
    
    if (str == NULL)
        return (-1);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 32 && str[i] < 127)
        {
            length += print_char(str[i]);
        }
        else
        {
            length += print_char('\\');
            length += print_char('x');
            ASCII_Value = str[i];

            if (ASCII_Value < 16)
            {
                length += print_char('0');
            }

            length += to_up_hex(ASCII_Value);
        }
    }

    return (length);
}
