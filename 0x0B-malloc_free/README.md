# Memory Allocation Programs

### **This repository contains seven programs related to dynamic memory allocation. The programs were written in C language.**

[Program 00: create_array](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0B-malloc_free/0-create_array.c)
This program creates an array of chars, and initializes it with a specific char

The prototype for the function is:
```
char *create_array(unsigned int size, char c);
```
- The function returns NULL if size = 0.
- Returns a pointer to the array, or NULL if it fails.

______________________________________________________________________________________________________________________________________________________________________

[Program 01: _strdup](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0B-malloc_free/1-strdup.c)
This program returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

The prototype for the function is:
```
char *_strdup(char *str);
```

- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL.
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.

______________________________________________________________________________________________________________________________________________________________________

[Program 02: str_concat](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0B-malloc_free/2-str_concat.c)
This program concatenates two strings.

The prototype for the function is:
```
char *str_concat(char *s1, char *s2);
```

- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated.
- if NULL is passed, treat it as an empty string.
- The function should return NULL on failure.

______________________________________________________________________________________________________________________________________________________________________

[Program 03: alloc_grid](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0B-malloc_free/3-alloc_grid.c)
This program returns a pointer to a 2 dimensional array of integers.

The prototype for the function is:
```
int **alloc_grid(int width, int height);
```

- Each element of the grid should be initialized to 0.
- The function should return NULL on failure.
- If width or height is 0 or negative, return NULL.

______________________________________________________________________________________________________________________________________________________________________

[Program 04: Realloc](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0B-malloc_free/4-free_grid.c)
This program reallocates a memory block using malloc and free.

The prototype for the function is:
```
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
```

- where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
- old_size is the size, in bytes, of the allocated space for ptr
- and new_size is the new size, in bytes of the new memory block
- The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
- If new_size > old_size, the “added” memory should not be initialized
- If new_size == old_size do not do anything and return ptr
- If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
- If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
- Don’t forget to free ptr when it makes sense

______________________________________________________________________________________________________________________________________________________________________

[Program 05: free_grid](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0B-malloc_free/4-free_grid.c)
This program frees a 2 dimensional grid previously created by your alloc_grid function.

The prototype for the function is:
```
void free_grid(int **grid, int height);
```

- Note that we will compile with your alloc_grid.c file. Make sure it compiles.

______________________________________________________________________________________________________________________________________________________________________

[Program 06: argstostr](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0B-malloc_free/100-argstostr.c)
This program concatenates all the arguments of your program.

The prototype for the function is:
```
char *argstostr(int ac, char **av);
```

- Returns NULL if ac == 0 or av == NULL.
- Returns a pointer to a new string, or NULL if it fails.
- Each argument should be followed by a \n in the new string.

______________________________________________________________________________________________________________________________________________________________________

[Program 07: strtow](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0B-malloc_free/101-strtow.c)
This program splits a string into words.

The prototype for the function is:
```
char **strtow(char *str);
```

- The function returns a pointer to an array of strings (words).
- Each element of this array should contain a single word, null-terminated.
- The last element of the returned array should be NULL.
- Words are separated by spaces.
- Returns NULL if str == NULL or str == "".
- If your function fails, it should return NULL.
