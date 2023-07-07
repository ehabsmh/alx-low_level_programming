#!/bin/bash

# Copy all the files in the needed directories
cp ../0x02-functions_nested_loops/*.c ../0x04-more_functions_nested_loops/*.c ../0x05-pointers_arrays_strings/*.c ../0x06-pointers_arrays_strings/*.c ../0x07-pointers_arrays_strings/*.c ./

#find and remove files which we don't need
find . -type f ! -name '_putchar.c' ! -name '3-islower.c' ! -name '4-isalpha.c' ! -name '0-isupper.c' ! -name '1-isdigit.c' ! -name '6-abs.c' ! -name '0-memset.c' ! -name '0-strcat.c' ! -name '1-memcpy.c' ! -name '1-strncat.c' ! -name '100-atoi.c' ! -name '2-strchr.c' ! -name '2-strlen.c' ! -name '2-strncpy.c' ! -name '3-puts.c' ! -name '3-strcmp.c' ! -name '3-strspn.c' ! -name '4-strpbrk.c' ! -name '5-strstr.c' ! -name '9-strcpy.c' ! -name 'main.h' ! -name 'script.bash' ! -name 'main.c' -exec rm {} +

# compile and assemble all .c files but do not link
gcc -c *.c

# remove main.o since we don't want it in our static library
rm main.o

# create the static library and include all the object files in it
ar -rcs libmy.a *.o

# listing the object files included in the library
ar -t libmy.a

# listing the symbols in the library
nm libmy.a

# Create main.c and put the source code YOURSELF

# link the static library to our main program
gcc -std=gnu89 main.c -L. -lmy -o quote

# Execute the main program
./quote

# Remove all object files, since we had already included it in our library

# Remove this script
