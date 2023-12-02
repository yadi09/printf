#include "main.h"

/**
 * to_binary - function that convert unsigned to binary
 * @args: arguments
 * Return: length of binary in string
*/

int to_binary(va_list args)
{
unsigned int back_up_num = va_arg(args, unsigned int);
char buffer[BUFFER_SIZE];
int i = 0, length;

while (back_up_num > 0)
{
	buffer[i] = (back_up_num % 2) + '0';
	back_up_num /= 2;
	i++;
}
buffer[++i] = '\0';
str_rev(buffer);

length = print_buffer(buffer);

return (length);    
}
