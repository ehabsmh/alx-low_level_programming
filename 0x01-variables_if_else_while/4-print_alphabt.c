#include <stdio.h>
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
if (alphabets[i] == 'e')
{
continue;
}
if (alphabets[i] == 'q')
{
continue;
}
putchar(alphabets[i]);
}
putchar('\n');
return (0);
}

