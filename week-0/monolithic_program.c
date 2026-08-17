#include <stdio.h>
int main() {
    int length = 10;
    int breadth = 5;
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    printf("Area=%d Peri=%d\n", area, peri);
    return 0;
}
