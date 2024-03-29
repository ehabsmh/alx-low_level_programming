# Memory Allocation Programs

### **This repository contains five programs related to memory allocation. The programs were written in C language.**

[Program 00: Malloc Checked](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0C-more_malloc_free/0-malloc_checked.c)
This program allocates memory using malloc function. 

The prototype for the function is:
```
void *malloc_checked(unsigned int b);
```
- The function returns a pointer to the allocated memory.
- If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.

______________________________________________________________________________________________________________________________________________________________________

[Program 01: String Nconcat](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0C-more_malloc_free/1-string_nconcat.c)
This program concatenates two strings.

The prototype for the function is:
```
char *string_nconcat(char *s1, char *s2, unsigned int n);
```

- The returned pointer points to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated.
- If the function fails, it returns NULL.
- If n is greater or equal to the length of s2, then it uses the entire string s2.
- If NULL is passed, it is treated as an empty string.

______________________________________________________________________________________________________________________________________________________________________

[Program 02: CAlloc](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0C-more_malloc_free/2-calloc.c)
This program allocates memory for an array using malloc.

The prototype for the function is:
```
void *_calloc(unsigned int nmemb, unsigned int size);
```

- The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
- The memory is set to zero.
- If nmemb or size is 0, then _calloc returns NULL.
- If malloc fails, then _calloc returns NULL.

______________________________________________________________________________________________________________________________________________________________________

[Program 03: Array Range](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0C-more_malloc_free/3-array_range.c)
This program creates an array of integers.

The prototype for the function is:
```
int *array_range(int min, int max);
```

- The array created contains all the values from min (included) to max (included), ordered from min to max.
- The function returns the pointer to the newly created array.
- If min is greater than max, it returns NULL.
- If malloc fails, it returns NULL.

______________________________________________________________________________________________________________________________________________________________________

[Program 04: Realloc](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x0C-more_malloc_free/100-realloc.c)
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
