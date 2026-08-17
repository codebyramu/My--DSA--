#include <stdio.h>
int main() {
    int A[10];
    A[0] = 1;
    A[1] = 3;
    A[2] = 5;
    for(int i = 0; i < 3; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
