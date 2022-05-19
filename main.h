#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
char *convert(unsigned long int num, int base, int lowercase);
int print_bigS(va_list l, flags_t *f);
int get_flag(char s, flags_t *f);
int print_rev(va_list l, flags_t *f);
int(*get_print(char s))(va_list l, flags_t *f);
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);

#endif
