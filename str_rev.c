#include "main.h"

/**
 * str_rev - function that reverse a string
 * @str: string
 * Return: void
 **/

void str_rev(char *str)
{
int i, length = strlen(str);
char temp;

if (str == NULL)
{
	write(1, "Fail str_rev!!!", 15);
	return;
}

for (i = 0; i < (length / 2); i++)
{
	temp = str[i];
	str[i] = str[(length - 1) - i];
	str[(length - 1) - 1] = temp;
}
}
