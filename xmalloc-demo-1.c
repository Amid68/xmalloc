#include <stdio.h>
#include "xmalloc.h"

int main() {
    void *ptr;

    printf("Allocating 1000 bytes\n");
    ptr = xmalloc(1000);
    printf("Memory allocated\n");

    free(ptr);
    printf("Memory freed\n");

    printf("Allocating 0 bytes\n");
    ptr = xmalloc(0);
    printf("Memory allocated\n");

    free(ptr);
    printf("Memory freed\n");

    return 0;
}

