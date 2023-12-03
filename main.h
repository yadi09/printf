#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

#define BUFFER_SIZE 1024

/**
 * struct specifiers - struct type
 * @c: format specifier
 * @func_ptr: - function pointer
*/
typedef struct specifiers
{
    char c;
    int (*func_ptr)(va_list);
} check;

int _printf(const char *format, ...);
int (*check_specifier(const char *s))(va_list);
int _putchar(va_list args);
int _puts(va_list args);
void str_rev(char *str);
int print_integer(va_list args);
int print_buffer(char *buffer);
int to_binary(va_list args);
int print_unsigned(va_list args);
int to_octal(va_list args);
int to_lower_hexa(va_list args);
int to_upper_hexa(va_list args);
int print_String(va_list args);
int print_address(va_list args);

#endif
