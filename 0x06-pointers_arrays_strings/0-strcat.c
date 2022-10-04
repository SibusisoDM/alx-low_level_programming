#include "main.h"

/**
 * _strcat - concatenates the string pointed to by
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
int ch, ch2;
ch = 0;
while(dest[ch])
ch++;
for (ch2 = 0; src[ch2]; ch2++)
dest[ch++] = src[ch2];
return (dest);
}
