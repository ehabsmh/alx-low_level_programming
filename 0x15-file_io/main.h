#ifndef MAIN_H
#define MAIN_H

/* HEADER FILES */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* HELPER PROTOTYPES */
int _putchar(char c);

/* MAIN PROTOTYPES */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
#endif
