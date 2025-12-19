#include <iostream>
using namespace std;
class Employee {
protected:
    string name;
    int id{};
    double salary{};
public:
    virtual ~Employee() = default; 
    virtual void input() {
        cout << "Enter name: ";
        cin.ignore();
        cin>> name;
        cout << "Enter ID: ";
        cin >> id;
    }
    virtual void calculateSalary() = 0;
    virtual void display() {
        cout << "\nName: " << name;
        cout << "\nID: " << id;
        cout << "\nSalary: " << salary << "\n";
    }
};
class Manager : public Employee {
public:
    void calculateSalary() override {
        salary = 50000 + 10000;
    }
};
class Worker : public Employee {
    int hours;
public:
    Worker() : hours(0) {}
    void input()  {
        Employee::input();
        cout << "Enter working hours: ";
        cin >> hours;
    }
    void calculateSalary() {
        salary = hours * 200;
    }
};
int main() {
    int choice;
    Employee* e = NULL;
    while (true) {
        cout << "\n1. Manager\n2. Worker\n3. Exit\nChoice: ";
        if (!(cin >> choice)) {
            cerr << "Invalid input. Exiting.\n";
            break;
        }

        if (choice == 1) {
            e = new Manager();
        } else if (choice == 2) {
            e = new Worker();
        } else {
            break;
        }

        e->input();
        e->calculateSalary();
        e->display();

        delete e;
        e = NULL;
    }
    return 0;
}