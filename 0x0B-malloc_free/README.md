# 0x0B. C - malloc, free

## 1-strdup

## 2-str_concat

## 3-alloc_grid
#### To write a function alloc_grid that returns a pointer to a 2-dimensional array of integers in C, several concepts are involved:

Pointer to Pointer: In C, a 2-dimensional array can be represented as a pointer to a pointer. Here, int ** is used to denote a pointer to a pointer to an integer. This effectively represents a 2D array.

Dynamic Memory Allocation: We use malloc to allocate memory dynamically. Since the size of the array depends on the width and height parameters, we can't use static allocation.

Allocating Memory for Rows and Columns:

Rows: First, allocate memory for the rows. This is an array of int* pointers, each representing a row.
Columns: For each row, allocate memory for the columns, which are the actual int values.
Initialization: Initialize each element of the 2D array to 0 using nested loops.

Error Handling: The function should handle errors like:

Negative width or height.
Memory allocation failure (checked after each malloc call).
Returning the 2D Array: Return the pointer to the array of pointers (rows).

Memory Deallocation: It's the caller's responsibility to deallocate this memory using free to prevent memory leaks.

## 4-free_grid.c

#### To write a function free_grid that frees a 2-dimensional grid created by the alloc_grid function, we need to understand a few key concepts:

Dynamic Memory Deallocation: In C, dynamically allocated memory must be manually deallocated to avoid memory leaks. This is done using the free function.

Deallocating Multidimensional Arrays: Since the grid is a 2-dimensional array dynamically allocated (an array of pointers, where each pointer points to an array), you need to free each sub-array (each row) first, and then free the array of pointers (the rows themselves).

Order of Freeing: It's crucial to free the memory in the reverse order of allocation. First, free each row (which was allocated last in alloc_grid), and then free the array of row pointers.

Handling NULL Pointers: The free function safely handles NULL pointers, so it's not necessary to check if grid or grid[i] is NULL before calling free.
