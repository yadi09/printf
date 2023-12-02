#include "main.h"

/**
 * to_lower_hexa - function that conver unsigned to hexa
 * @args: arguments
 * Return: length of hexa number in string
*/

int to_lower_hexa(va_list args)
{
unsigned int num = (unsigned int)va_arg(args, unsigned int);
unsigned int back_up_num = num;
char hexa_range[] = "0123456789abcdef";
char buffer[1024];
int i = 0, length;

while (back_up_num > 0)
{
	buffer[i] = hexa_range[(back_up_num % 16)];
	back_up_num /= 16;
	i++;
}
buffer[i] = '\0';
str_rev(buffer);

length = print_buffer(buffer);

return (length);
}