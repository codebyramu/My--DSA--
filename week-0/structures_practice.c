#include <stdio.h>
struct Card {
    int face;
    int shape;
    int color;
};
int main() {
    struct Card c = {1, 0, 0};
    printf("Card: face=%d shape=%d color=%d\n", c.face, c.shape, c.color);
    return 0;
}
