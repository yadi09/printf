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

if (format == NULL)
return (-1);
va_start(args, format);
if (format[0] == '%' && !format[1])
	return (-1);
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
desire_func = check_specifier(&format[i]);
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
