#!/bin/bash
gcc -c *.c
ar rc liball.a *.o
echo "Static library 'libmy.a' has been created."
