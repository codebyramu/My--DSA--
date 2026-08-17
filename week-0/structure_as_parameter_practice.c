#include <stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
void fun(struct Rectangle *p) {
    p->length = 20;
    printf("Length=%d\n", p->length);
}
int main() {
    struct Rectangle r = {10, 5};
    fun(&r);
    printf("Length=%d\n", r.length);
    return 0;
}
