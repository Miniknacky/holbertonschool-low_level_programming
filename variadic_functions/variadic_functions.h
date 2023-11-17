#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
/**
 * struct funckey - Struct funckey
 * @spec: The format specifier
 * @f: The function associated
 */
typedef struct funckey
{
	char spec;
	void (*f)(va_list);
} funckey;

void print_all(const char * const format, ...);
void printf_char(va_list list);
void printf_int(va_list list);
void printf_float(va_list list);
void printf_string(va_list list);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
