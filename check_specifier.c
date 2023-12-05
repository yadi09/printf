#include "main.h"

/**
 * check_specifier - function that check the format specifier
 * @s: format specifier
 * Return: function pointer
*/

int (*check_specifier(const char s))(va_list)
{
    check specifier[] = {
        {'c', _putchar},
        {'s', _puts},
        {'d', print_integer},
        {'i', print_integer},
        {'b', to_binary},
        {'u', print_unsigned},
        {'o', to_octal},
        {'x', to_lower_hexa},
        {'X', to_upper_hexa},
        {'S', print_String},
        {'p', print_address},
        {'r', revstr},
        {'R', rot13}
    };

    int i = 0;

    while (i < 13)
    {
        if (specifier[i].c == s)
        return (specifier[i].func_ptr);

        i++;
    }
    return (NULL);
}
