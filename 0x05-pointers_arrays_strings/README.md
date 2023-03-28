Program 00: Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);


Program 01: Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);


Program 02: Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen.


Program 03: Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts.


Program 04: Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);


Program 05: Write a function that reverses a string.

Prototype: void rev_string(char *s);


Program 06: Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);


Program 07: Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2