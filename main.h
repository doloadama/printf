#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 * @struct: the structure
 * Return: int
 */
typedef struct structprint
{
char *q;
int (*u)(char *format, va_list);
} structype;

int _putchar(char ch);
int _puts(char *string);
int convc(char *format, va_list);
int convstr(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int _printf(char *format, ...);
int convint(char *format, va_list pa);
int entier(int number);
int comptch(int number);
int _abs(int number);
int convpercent(char *format, va_list pa);
int convhex(char *format, va_list);
int convHEX(char *format, va_list);
int convocta(char *format, va_list);
int conv_unsign(char *format, va_list);

#endif
