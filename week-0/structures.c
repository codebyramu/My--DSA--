#include <stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle r = {10, 5};
    printf("Area=%d\n", r.length * r.breadth);
    return 0;
}
