#include <stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
void initialize(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}
int area(struct Rectangle r) {
    return r.length * r.breadth;
}
int main() {
    struct Rectangle r;
    initialize(&r, 10, 5);
    printf("Area=%d\n", area(r));
    return 0;
}
