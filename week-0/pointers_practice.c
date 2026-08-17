#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p = (int *)malloc(3 * sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    for(int i = 0; i < 3; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}
