#include "main.h"

/**
 * _printf -  function that produces output according to a format.
 * @format: character string. 
 * Return: length of formated output string
*/

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, length = 0;
    int (*desire_func)(va_list);
    add.hash = 0;
    add.length_modifier_long = 'd';
    add.length_modifier_short = 'd';
    add.plus = 0;
    add.space = 0;
    add.mult = 1;
    add.num = 0;

    if (format == NULL)
    return (-1);

    va_start(args, format);

    while (format[i])
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            length++;
        }
        else
        {
            i++;
            if (format[i] == '%')
            {
                write(1, "%", 1);
                length++;
            }
            else
            {
                while (check_if_flag(format[i]))
                i++;

                desire_func = check_specifier(format[i]);
                if (desire_func == NULL)
                {
                    _printf("%%%c", format[i]);
                }
                else
                length += desire_func(args);
            }
        }
        i++;
    }
    va_end(args);    
    return (length);
}
