#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charSize;
        int intSize;
        long int longIntSize;
        long long int longLongIntSize;
        float floatSize;
        printf("Size of a char: %lu byte(s)\n", sizeof(charSize));
        printf("Size of an int: %lu byte(s)\n", sizeof(intSize));
        printf("Size of a long int: %lu byte(s)\n", sizeof(longIntSize));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongIntSize));
        printf("Size of a float: %lu byte(s)\n", sizeof(floatSize));
        return (0);
}

