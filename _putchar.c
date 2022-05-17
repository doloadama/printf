#include <unistd.h>

/**
 * _putchar - print char with stdout
 * @ch: char to print
 * Return: Output.
 */
int _putchar(char ch)
{
static int comptch;
static char buffer[1024];

if (ch == -1)
{
comptch = 0;
return (0);
}
if (ch == -2 || comptch == 1024)
{
write(1, buffer, comptch);
comptch = 0;
}
if (ch != -1 && ch != -2)
{
buffer[comptch] = ch;
comptch++;
return (1);
}
return (0);
}
