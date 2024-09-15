# Compiler
CC = gcc

# Targets
TARGETS = xmalloc-demo-1 xmalloc-demo-2

# Object files
OBJS = xmalloc.o xmalloc-demo-1.o xmalloc-demo-2.o

# Default target
all: $(TARGETS)

# Compile xmalloc.c
xmalloc.o: xmalloc.c
	$(CC) -c xmalloc.c

# Compile and link xmalloc-demo-1
xmalloc-demo-1: xmalloc.o xmalloc-demo-1.o
	$(CC) -o xmalloc-demo-1 xmalloc.o xmalloc-demo-1.o

xmalloc-demo-1.o: xmalloc-demo-1.c
	$(CC) -c xmalloc-demo-1.c

# Compile and link xmalloc-demo-2
xmalloc-demo-2: xmalloc.o xmalloc-demo-2.o
	$(CC) -o xmalloc-demo-2 xmalloc.o xmalloc-demo-2.o

xmalloc-demo-2.o: xmalloc-demo-2.c
	$(CC) -c xmalloc-demo-2.c

# Clean up
clean:
	rm -f $(OBJS) $(TARGETS)

