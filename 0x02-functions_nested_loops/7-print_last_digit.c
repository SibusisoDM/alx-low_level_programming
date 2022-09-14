#include "main.h"

/**
 * print_last_digit - print the last digit of the digit
 * @n: the number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
if (last_digit < 10)
{
_putchar('0' + -last_digit);
return (-last_digit);
}
else
{
_putchar('0' + last_digit);
return (last_digit);
}
}
