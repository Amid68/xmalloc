#include <stdio.h>
#include "xmalloc.h"

int main() {
    size_t count = 1;
    size_t nbytes = 1000000000; // 1,000,000,000 bytes (approximately 1 GB)
    void *ptr;

    while (1) {
        ptr = xmalloc(nbytes);
        printf("%zu: %zu bytes allocated\n", count, nbytes);
        // Intentionally not freeing the allocated memory to simulate a memory leak
        count++;
    }

    return 0;
}

