#include <stdio.h>
#include <stdlib.h>
#include "xmalloc.h"

void * malloc_or_exit(size_t nbytes, const char * file, int line) {
    void * ptr = malloc(nbytes);

    if (ptr == NULL || nbytes == 0) {
        fprintf(stderr, "%s: line %d: malloc() of %zu bytes failed\n", file, line, nbytes);
        exit(EXIT_FAILURE);
    }

    return ptr;
}


