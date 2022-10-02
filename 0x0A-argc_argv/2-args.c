#include <stdio.h>
/**
 * main - the entry of the program
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 id success
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
