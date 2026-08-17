#include <iostream>
int main() {
    int x = 25;
    int &y = x;
    y = 50;
    std::cout << x << "\n";
    return 0;
}
