#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @c: the character to be determined if it is lower or not
 * Return: 1 if lowercase or 0 if not lowercase
 */
int _islower(int c)
{
int alpha;

int count;

for (alpha = 97; alpha <= 122; alpha ++)
{
if (c == alpha)
{
count++;
break;
}
}
if (count == 0)
return (0);
else
return (1);
}
