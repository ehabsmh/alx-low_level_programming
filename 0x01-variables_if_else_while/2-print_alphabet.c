#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char c[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; c[i] != '\0'; i++)
{
putchar(c[i]);
}

putchar('\n');

return (0);
}

