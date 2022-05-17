#include "main.h"

/**
 * convstr- print str.
 * @pa: gtgtg
 * @format: format str.
 * Return: number str for print.
 */

int convstr(char *format, va_list pa)
{
char *string = va_arg(pa, char *);
int contador;
(void)format;
if (string == NULL)
string = "(null)";
contador = _puts(string);
return (contador);
}
