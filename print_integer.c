#include "main.h"

/**
 * print_int - prints an integer
 * @ap: variadic argument
 * Return: amount of characters printed
 */
int print_int(va_list ap)
{
int n, var = 1, length = 0;
unsigned int pos;

n = va_arg(ap, int);

if (n < 0)
{
_putchar('-');
pos = n * -1;
length++;
}
else
{
pos = n;
}
while (pos / var > 9)
{
var = var * 10;
}
while (var != 0)
{
length = length + _putchar(pos / var + '0');
pos = pos % var;
var = var / 10;
}
return (length);
}
