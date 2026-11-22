#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T findMin(T a, T b) {
    return (a < b) ? a : b;
}

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T findMax3(T a, T b, T c) {
    T max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

template <typename T>
T findMin3(T a, T b, T c) {
    T min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

template <typename T, typename U>
void displayComparison(T a, U b) {
    cout << "Comparing " << a << " (type " << typeid(a).name() << ") and "
         << b << " (type " << typeid(b).name() << ")" << endl;
    cout << "Max: " << ((a > b) ? a : b) << endl;
    cout << "Min: " << ((a < b) ? a : b) << endl;
}

int main() {
    int int1 = 10, int2 = 20;
    cout << "Integer values: " << int1 << ", " << int2 << endl;
    cout << "Max: " << findMax(int1, int2) << endl;
    cout << "Min: " << findMin(int1, int2) << endl;
    swapValues(int1, int2);
    cout << "After swap: " << int1 << ", " << int2 << endl;

    double d1 = 15.5, d2 = 25.2, d3 = 10.8;
    cout << "\nMax of 3 doubles: " << findMax3(d1, d2, d3) << endl;
    cout << "Min of 3 doubles: " << findMin3(d1, d2, d3) << endl;

    cout << endl;
    displayComparison(10, 20.5);

    return 0;
}
