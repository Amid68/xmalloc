#ifndef __XMALLOC_H__
#define __XMALLOC_H__

#include <stdlib.h>

void * malloc_or_exit(size_t nbytes, const char * file, int line);

// macro that calls malloc_or_exit() and automatically provides the current file name and line number
#define xmalloc(nbytes) malloc_or_exit((nbytes), __FILE__, __LINE__)

#endif
