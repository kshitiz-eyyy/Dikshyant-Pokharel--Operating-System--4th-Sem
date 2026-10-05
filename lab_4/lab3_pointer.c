#include <stdio.h>
#include <stdlib.h>

int main() {
int *forheap;

forheap = (int * )malloc(sizeof(int));
*forheap = 30;

printf("Address of pointer (Stack): %p\n", (void*)&forheap);
printf("Address of data (Heap): %p\n", (void*)forheap);
printf("Value stores: %d\n", *forheap);

free(forheap);
return 0;
}

