#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    void setDimensions(float l, float b) {
        length = l;
        breadth = b;
    }

    float calculateArea();
    float calculatePerimeter();
    void display();
};

float Rectangle::calculateArea() {
    return length * breadth;
}

float Rectangle::calculatePerimeter() {
    return 2 * (length + breadth);
}

void Rectangle::display() {
    cout << "Length: " << length;
    cout << "Breadth: " << breadth;
    cout << "Area: " << calculateArea();
    cout << "Perimeter: " << calculatePerimeter();
}

int main() {
    Rectangle rect;
    float l, b;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    rect.setDimensions(l, b);
    rect.display();

    return 0;
}