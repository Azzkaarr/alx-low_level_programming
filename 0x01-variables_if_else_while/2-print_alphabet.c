#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry piont
 *
 * Return: Always 0 (success)
 */
int  main(void)
{
int lowerCASe = 'a';
while (lowerCASe <= 'z')
{
putchar(lowerCASe);
lowerCASe += 1;
}
putchar ('\n');
return (0);
}
