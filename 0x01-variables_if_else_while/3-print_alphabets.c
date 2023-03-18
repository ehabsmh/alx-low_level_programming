#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; alphabets[i] != '\0'; i++)
{
putchar(alphabets[i]);
}

for (i = 0; alphabets[i] != '\0'; i++)
{
putchar(toupper(alphabets[i]));
}

putchar('\n');

return (0);
}

