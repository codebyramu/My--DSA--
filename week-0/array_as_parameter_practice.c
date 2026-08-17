#include <stdio.h>
#include <stdlib.h>
int *fun(int size) {
    int *p = (int *)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        p[i] = i + 1;
    }
    return p;
}
int main() {
    int *ptr = fun(5);
    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}
