#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Custom printf function prototype */
int _printf(const char *format, ...);

/* Prototypes for custom conversion specifiers */
int print_binary(va_list args);
int print_string_non_printable(va_list args);
int print_pointer_address(va_list args);
int print_reversed_string(va_list args);
int print_rot13_string(va_list args);

/* Prototypes for handling standard conversion specifiers */
int print_character(va_list args);
int print_string(va_list args);
int print_percent_sign(va_list args);
int print_integer(va_list args);
int print_unsigned_integer(va_list args);
int print_octal(va_list args);
int print_hexadecimal_upper(va_list args);
int print_hexadecimal_lower(va_list args);

/* Helper functions for custom conversion specifiers */
char *convert_to_binary(unsigned int num);
char *convert_to_hex_upper(unsigned int num);
char *convert_to_hex_lower(unsigned int num);
char *rot13(char *str);

#endif /* MAIN_H */
