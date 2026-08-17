#include <stdio.h>
#include <stdlib.h>
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle *p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 15;
    p->breadth = 7;
    printf("Area=%d\n", p->length * p->breadth);
    free(p);
    return 0;
}
