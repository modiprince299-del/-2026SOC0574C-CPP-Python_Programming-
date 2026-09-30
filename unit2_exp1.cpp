#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;

public:
    Employee() : empId(547), name("prince"), basicSalary(100000), bonus(1000), totalSalary(110000) {
        cout << "Default constructor called" << endl;
    }

    Employee(int id, string n, float salary, float b) {
        empId = id;
        name = n;
        basicSalary = salary;
        bonus = b;
        calculateTotalSalary();
        cout << "Parameterized constructor called";
    }

    void calculateTotalSalary() {
        totalSalary = basicSalary + bonus;
    }

    void display() const {
        cout << "Employee ID: " << empId;
        cout << "Name: " << name;
        cout << "Basic Salary: " << basicSalary;
        cout << "Bonus: " << bonus;
        cout << "Total Salary: " << totalSalary;
    }
};

int main() {
    Employee emp1;
    emp1.display();

    Employee emp2(101, "soham", 50000, 10000);
    emp2.display();

    return 0;
}