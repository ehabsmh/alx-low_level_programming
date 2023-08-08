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
#endif
