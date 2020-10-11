
### Notes
- `&` for referencing, `*` for deferencing.
- Not initializing a pointer is dangerous. Initialize it to `NULL` or 0.
- Creating a pointer only allocates memory to store the pointer itself.
- Before you use a pointer, it should be assigned a memory location that has already been allocated.
- Assign the address of an existing variable, or you can use `malloc()` to allocate memory first.

### Pointers and const
- you can use `const` keyword to indicate that the value pointed to by a pointer must not be changed. (e.g. `const int *p_num = &num;`)
- but you still can change the value pointed to by using variable other than the pointer.
- you also can change what the pointer points to.
- you can also use `const` keyword to indicate that the address value of a pointer must not be changed. (e.g. `int *const p_num = &num;`)
- you can use both: `const int *const p_num = &num;`

### Void pointers
- type void means absence of any type.
- a pointer of type `void *` can contain the address of a data item of any type.
- when you want to access to the data of type `void *`, you have to type cast it first.

### Pointers and arrays
- arrays and pointers are closely related, and can sometimes be used interchangealby.
- belows are two equivalent ways to create a pointer to array.
- `values_ptr = values;`
- `values_ptr = &values[0];`
- `arr[i]` and `*(arr + i)` are two equivalent expressions.

### Pass by reference
- You can pass by reference using pointers.
- Note that address itself is passed by value.

### Dynamic memory allocation
- Pointer makes it available to allocate memory dynamically on runtime.
- Dynamic memory allocation reserves space in a memory area called the heap.
- Stack is where function arguments and local variables are stored.
- When the execution of a function ends, the space allocated to store arguments and local variables is freed.
- Heap space is controlled by you.
- You must free the space you've allocated to reuse it.

### malloc, calloc, realloc
- `malloc()`: allocates memory. Need to include `stdlib.h` header file. You specify the number of bytes to allocate, and it returns the address. So the only place to put it is a pointer.
- e.g. `int *p_num = (int *) malloc(25*sizeof(int));`
- `malloc(num_bytes)` returns a pointer of type void, so you have to cast it.
- If it cannot allocate for any reason, it returns `NULL`.
- A memory leak occurs when you allocate some memory and do not retain the reference to it, so you are unable to release the memory.
- `free(ptr)`: releases memory. You should always set the pointer to `NULL` after releasing memory.
- `calloc(num_el, size_el)`: allocates memory as a number of elements of a given size, and it also initializes the memory as zero.
- `realloc(ptr, num_bytes)`: enables you reuse or extend memory that is previously allocated. Transfers the contents of the previously allocated memory.
