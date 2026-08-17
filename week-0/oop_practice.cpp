#include <iostream>
class Rectangle {
public:
    int length;
    int breadth;
    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
};
int main() {
    Rectangle r;
    r.length = 10;
    r.breadth = 5;
    std::cout << "Area=" << r.area() << " Peri=" << r.perimeter() << "\n";
    return 0;
}
