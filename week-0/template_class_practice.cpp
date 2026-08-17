#include <iostream>
template <class T>
class Rectangle {
private:
    T length;
    T breadth;
public:
    Rectangle(T l, T b) {
        length = l;
        breadth = b;
    }
    T area() {
        return length * breadth;
    }
};
int main() {
    Rectangle<float> r(10.5, 5.2);
    std::cout << r.area() << "\n";
    return 0;
}
