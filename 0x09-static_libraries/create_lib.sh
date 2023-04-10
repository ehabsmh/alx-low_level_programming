#!/bin/bash
gcc -c *.c
ar rcs libmy.a *.o
echo "Static library 'libmy.a' has been created."
