#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Calculator {
private:
    T value1;
    T value2;

public:
    Calculator(T v1 = T(), T v2 = T()) : value1(v1), value2(v2) {}

    void setValues(T v1, T v2) {
        value1 = v1;
        value2 = v2;
    }

    T add() const { return value1 + value2; }
    T subtract() const { return value1 - value2; }
    T multiply() const { return value1 * value2; }

    T divide() const {
        if (value2 == 0) {
            throw "Division by zero!";
        }
        return value1 / value2;
    }

    T findLarger() const {
        return (value1 > value2) ? value1 : value2;
    }

    T findSmaller() const {
        return (value1 < value2) ? value1 : value2;
    }

    void displayResults() const {
        cout << "Value 1: " << value1 << endl;
        cout << "Value 2: " << value2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        try {
            cout << "Division: " << divide() << endl;
        } catch (const char* msg) {
            cout << "Division Error: " << msg << endl;
        }
        cout << "Larger Value: " << findLarger() << endl;
        cout << "Smaller Value: " << findSmaller() << endl;
    }
};

template <>
class Calculator<string> {
private:
    string value1;
    string value2;

public:
    Calculator(string v1 = "", string v2 = "") : value1(v1), value2(v2) {}

    void setValues(string v1, string v2) {
        value1 = v1;
        value2 = v2;
    }

    string add() const { return value1 + value2; }

    string findLarger() const {
        return (value1 > value2) ? value1 : value2;
    }

    string findSmaller() const {
        return (value1 < value2) ? value1 : value2;
    }

    void displayResults() const {
        cout << "Value 1: " << value1 << endl;
        cout << "Value 2: " << value2 << endl;
        cout << "Concatenation: " << add() << endl;
        cout << "Larger (lexicographically): " << findLarger() << endl;
        cout << "Smaller (lexicographically): " << findSmaller() << endl;
    }
};

int main() {
    Calculator<int> intCalc(10, 5);
    intCalc.displayResults();

    cout << endl;
    Calculator<float> floatCalc(3.14, 2.71);
    floatCalc.displayResults();

    cout << endl;
    Calculator<string> stringCalc("Hello", "World");
    stringCalc.displayResults();

    return 0;
}
