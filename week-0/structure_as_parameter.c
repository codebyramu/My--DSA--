#include <stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
void fun(struct Rectangle r) {
    r.length = 20;
    printf("Length=%d\n", r.length);
}
int main() {
    struct Rectangle r = {10, 5};
    fun(r);
    printf("Length=%d\n", r.length);
    return 0;
}
