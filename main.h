#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

#define BUFFER_SIZE 1024
#define MIN_SHRT_STR "-32768"
#define MIN_INT_STR "-2147483648"
#define MIN_LONG_STR "-9223372036854775808"

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

struct add_mod
{
    int plus;
    int space;
    int hash;
    int length_modifier_long;
    int length_modifier_short;
} add;

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
int print_char(char c);
int revstr(va_list args);
int rot13(va_list args);
int check_if_flag(char flag);

#endif
