# More Malloc Free

This directory contains solutions for the "More Malloc Free" project in the Holberton School low-level programming curriculum.

## Files

- `0-malloc_checked.c` - Function that allocates memory using malloc with error checking
- `main.h` - Header file containing function prototypes

## Description

### 0-malloc_checked.c
Allocates memory using malloc. If malloc fails, the function causes normal process termination with a status value of 98.

**Prototype:** `void *malloc_checked(unsigned int b);`

**Parameters:**
- `b`: Number of bytes to allocate

**Returns:** Pointer to allocated memory

**Behavior:**
- On success: Returns pointer to allocated memory
- On failure: Terminates process with exit status 98
