#include <iostream>
#include <cstring> // Include for strncpy
using namespace std;

class Employee {
    string name; // Use string instead of char array
    int age, salary;

public:
    void getdata(void);
    void getdata(const char *n, int a, int s); // Overloaded getdata
    void putdata(void);
    void putdata(const char *n, int a, int s); // Overloaded putdata
};

void Employee::getdata(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter salary: ";
    cin >> salary;
}

void Employee::getdata(const char *n, int a, int s) {
    name = n;
    age = a;
    salary = s;
}

void Employee::putdata(void) {
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Salary: " << salary << "\n";
}

void Employee::putdata(const char *n, int a, int s) {
    cout << "Name: " << n << "\n";
    cout << "Age: " << a << "\n";
    cout << "Salary: " << s << "\n";
}

const int size = 5;

int main() {
    Employee manager[size];

    for (int i = 0; i < size; i++) {
        cout << "Details of Manager " << i + 1 << "\n";
        manager[i].getdata();
    }

    cout << "\n";

    for (int i = 0; i < size; i++) {
        cout << "\nManager " << i + 1 << "\n";
        manager[i].putdata();
    }

    return 0;
}
