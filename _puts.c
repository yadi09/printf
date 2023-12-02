#include "main.h"

/**
 * _puts - function that print the string
 * @args: arguments
 * Return: length of the string
*/

int _puts(va_list args)
{
    char *str = va_arg(args, char*);
    int length;

    char *new_str = malloc(strlen(str) + 1);
    if (new_str == NULL)
    return (-1);
    
    strcpy(new_str, str);
    length = strlen(new_str);

    write(1, new_str, length);
    free(new_str);

    return (length);
}