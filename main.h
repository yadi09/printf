#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

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

#endif
