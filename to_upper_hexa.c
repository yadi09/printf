#include "main.h"

/**
 * to_upper_hexa - function that convert unsigned to upper hexa
 * @args: arguments
 * Return: length of hexa number in string
*/

int to_upper_hexa(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
unsigned int back_up_num = num;
char HEXA_range[] = "0123456789ABCDEF";
char buffer[BUFFER_SIZE];
int i = 0, length;

while (back_up_num > 0)
{
	buffer[i] = HEXA_range[(back_up_num % 16)];
	back_up_num /= 16;
	i++;
}
buffer[i] = '\0';
str_rev(buffer);

length = print_buffer(buffer);

return (length);
}
