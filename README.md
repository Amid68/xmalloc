# xmalloc: Simplifying Memory Allocation in C

This project demonstrates the use of a custom memory allocation function called `xmalloc()` that simplifies the process of dynamic memory allocation in C. The function wraps around `malloc()`, handling error checking and making your code cleaner and easier to maintain.

## Features

- **`xmalloc()`**: A wrapper around `malloc()` that checks for memory allocation failures.
- **Error handling**: If allocation fails, the program prints an error message and exits.
- **Demo Programs**: Two demo programs (`xmalloc-demo-1.c` and `xmalloc-demo-2.c`) showcase the usage of `xmalloc()` and its benefits.

## Files

- `xmalloc.h`: Header file defining the `xmalloc()` macro.
- `xmalloc.c`: Implementation of the `malloc_or_exit()` function.
- `xmalloc-demo-1.c`: A demo showing basic usage of `xmalloc()`.
- `xmalloc-demo-2.c`: A demo simulating memory allocation until failure (memory leak example).

## Usage

### Compilation

To compile the project, use the provided `Makefile`. It will compile the necessary object files and create executables for the demo programs.

```bash
make
```

### Running the Demos

1. **Run `xmalloc-demo-1`:**

   ```bash
   ./xmalloc-demo-1
   ```

   **Expected output:**

   ```
   Allocating 1000 bytes
   Memory allocated
   Memory freed
   Allocating 0 bytes
   xmalloc-demo-1.c: line 15: malloc() of 0 bytes failed
   ```

2. **Run `xmalloc-demo-2`:**

   ```bash
   ./xmalloc-demo-2
   ```

   **Note:** This program simulates a memory leak and will allocate large amounts of memory until it fails.

### Cleaning Up

To remove the compiled files, use:

```bash
make clean
```

