#include "main.h"

/**
 * _puts - function that print the string
 * @args: arguments
 * Return: length of the string
*/

int _puts(va_list args)
{
char *str = va_arg(args, char*);

char *new_str = malloc(strlen(str) + 1);
if (new_str == NULL)
	return (-1);

strcpy(new_str, str);
write(1, new_str, strlen(new_str));
free(new_str);

return (strlen(str));
}
