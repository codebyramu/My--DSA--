#include <iostream>
class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b);
    int area();
    ~Rectangle();
};
Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}
int Rectangle::area() {
    return length * breadth;
}
Rectangle::~Rectangle() {}
int main() {
    Rectangle r(10, 5);
    std::cout << r.area() << "\n";
    return 0;
}
