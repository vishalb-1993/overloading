#include<iostream>
using namespace std;

class Employee {
    char name[30];
    int age, salary;

public:
    Employee(); // Default constructor
    Employee(const char* n, int a, int s); // Parameterized constructor
    void getdata(void);
    void putdata(void);
};

Employee::Employee() {
    // Default constructor initializes data members to default values
    name[0] = '\0';
    age = 0;
    salary = 0;
}

Employee::Employee(const char* n, int a, int s) {
    // Parameterized constructor initializes data members with provided values
    strncpy(name, n, sizeof(name)); // Using strncpy to avoid buffer overflow
    age = a;
    salary = s;
}

void Employee::getdata(void) {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter salary: ";
    cin >> salary;
}

void Employee::putdata(void) {
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Salary: " << salary << "\n";
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
