#include <unistd.h>

/**
 * _putchar - writed the character c to stdout
 * @c: character to be print
 *
 * Return: On success 1
 * On error, -1 is returned. and error is set appropriately
 */

int _putchar(char)
{
return (write(1, &c, 1));
}
