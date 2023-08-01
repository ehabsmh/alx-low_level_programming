# Singly Linked List Programs

### **This repository contains fifteen programs related to Singly Linked List. The programs were written in C language.**

[Program 00: Print list](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/0-print_listint.c):
Prints all the elements of a listint_t list.

The prototype for the function is:
```
size_t print_listint(const listint_t *h);
```

***Requirements:***
- Return: the number of nodes
- Format: see example
- You are allowed to use printf

---

[Program 01: List length](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/1-listint_len.c):
Returns the number of elements in a linked listint_t list.

The prototype for the function is:
```
size_t listint_len(const listint_t *h);
```

***Requirements:***
- Return the number of nodes

---

[Program 02: Add node](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/2-add_nodeint.c):
Adds a new node at the beginning of a listint_t list.

The prototype for the function is:
```
listint_t *add_nodeint(listint_t **head, const int n);
```

***Requirements:***
- Return: the address of the new element, or NULL if it failed

---

[Program 03: Add node at the end](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/3-add_nodeint_end.c):
Adds a new node at the end of a listint_t list.

The prototype for the function is:
```
listint_t *add_nodeint_end(listint_t **head, const int n);
```

***Requirements:***
- Return: the address of the new element, or NULL if it failed

---

[Program 04: Free list](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/4-free_listint.c):
Frees a listint_t list.

The prototype for the function is:
```
void free_listint(listint_t *head);
```

---

[Program 05: Free](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/5-free_listint2.c):
Frees a listint_t list.

The prototype for the function is:
```
void free_listint2(listint_t **head);
```

***Requirements:***
- The function sets the head to NULL

---

[Program 06: Pop](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/6-pop_listint.c):
Deletes the head node of a listint_t linked list, and returns the head node’s data (n).

The prototype for the function is:
```
int pop_listint(listint_t **head);
```

***Requirements:***
- If the linked list is empty return 0

---

[Program 07: Get node at index](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/7-get_nodeint.c):
Returns the nth node of a listint_t linked list.

The prototype for the function is:
```
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```

***Requirements:***
- where index is the index of the node, starting at 0
- if the node does not exist, return NULL

---

[Program 08: Sum list](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/8-sum_listint.c):
Returns the sum of all the data (n) of a listint_t linked list.

The prototype for the function is:
```
int sum_listint(listint_t *head);
```

***Requirements:***
- if the list is empty, return 0

---

[Program 09: Insert](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/9-insert_nodeint.c):
Inserts a new node at a given position.

The prototype for the function is:
```
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```

***Requirements:***
- where idx is the index of the list where the new node should be added. Index starts at 0
- Returns: the address of the new node, or NULL if it failed
- if it is not possible to add the new node at index idx, do not add the new node and return NULL

---

[Program 10: Delete at index](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/10-delete_nodeint.c):
Deletes the node at index index of a listint_t linked list.

The prototype for the function is:
```
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```

***Requirements:***
- where index is the index of the node that should be deleted. Index starts at 0
- Returns: 1 if it succeeded, -1 if it failed

---

[Program 11: Reverse list](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/100-reverse_listint.c):
Reverses a listint_t linked list.

The prototype for the function is:
```
listint_t *reverse_listint(listint_t **head);
```

***Requirements:***
- Returns: a pointer to the first node of the reversed list
- You are not allowed to use more than 1 loop.
- You are not allowed to use malloc, free or arrays
- You can only declare a maximum of two variables in your function

---

[Program 12: Print (safe version)](https://github.com/ehabsmh/alx-low_level_programming/blob/main/0x13-more_singly_linked_lists/101-print_listint_safe.c):
Prints a listint_t linked list.

The prototype for the function is:
```
size_t print_listint_safe(const listint_t *head);
```

***Requirements:***
- Returns: the number of nodes in the list
- This function can print lists with a loop
- You should go through the list only once
- If the function fails, exit the program with status 98

---
