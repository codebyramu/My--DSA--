#include <iostream>
class Rectangle {
private:
    int length;
    int breadth;
public:
    void initialize(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
};
int main() {
    Rectangle r;
    r.initialize(10, 5);
    std::cout << r.area() << "\n";
    return 0;
}
