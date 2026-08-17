#include <stdio.h>
int area(int length, int breadth) {
    return length * breadth;
}
int perimeter(int length, int breadth) {
    return 2 * (length + breadth);
}
int main() {
    int length = 10;
    int breadth = 5;
    printf("Area=%d Peri=%d\n", area(length, breadth), perimeter(length, breadth));
    return 0;
}
