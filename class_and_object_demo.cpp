#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float marks;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.input();
    cout << "\nStudent Details:\n";
    s1.display();
    return 0;
}
