#include <stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
int area(struct Rectangle r) {
    return r.length * r.breadth;
}
int perimeter(struct Rectangle r) {
    return 2 * (r.length + r.breadth);
}
int main() {
    struct Rectangle r = {10, 5};
    printf("Area=%d Peri=%d\n", area(r), perimeter(r));
    return 0;
}
