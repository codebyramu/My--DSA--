#include <iostream>
int main() {
    int a = 10;
    int &r = a;
    r++;
    std::cout << a << "\n";
    return 0;
}
