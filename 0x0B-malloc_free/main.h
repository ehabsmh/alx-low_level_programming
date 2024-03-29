#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* Helper functions prototype */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
char *_strncpy(char *dest, char *src, int n);
int count_words(char *str);
int _strcmp(char *s1, char *s2);

/* main functions prototype */
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
