#include "main.h"

/**
 * revstr - reverse a given string
 * @args: string
 * Return: length of the string
*/

int revstr(va_list args)
{
    char *str;
    int length, i;
    char *ptr = va_arg(args, char*);

    if (ptr == NULL)
        return (-1);

    length = strlen(ptr);
    str = malloc(sizeof(char) * (length + 1));
    if (str == NULL)
        return (-1);

    i = 0;
    while (ptr[i] != '\0')
    {
        str[i] = ptr[(length - 1) - i];
        i++;   
    }
    str[i] = '\0';
    length = print_buffer(str);
    free(str);
    
    return (length);
}
