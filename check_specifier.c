#include "main.h"

/**
 * check_specifier - function that check the format specifier
 * @s: format specifier
 * Return: function pointer
*/

int (*check_specifier(const char *s))(va_list)
{
	check specifier[] = {
		{'c', _putchar},
		{'s', _puts}
	};

int i = 0;

while (i < 2)
{
	if (specifier[i].c == *s)
		return (specifier[i].func_ptr);

	i++;
}

return (NULL);
}
