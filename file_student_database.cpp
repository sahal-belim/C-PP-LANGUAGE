#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    Student s;
    ofstream outFile("student_data.txt", ios::app);

    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter marks: ";
    cin >> s.marks;

    outFile << s.name << " " << s.age << " " << s.marks << endl;
    outFile.close();

    cout << "Data saved successfully!" << endl;

    cout << "\nReading from file:\n";
    ifstream inFile("student_data.txt");
    while (inFile >> s.name >> s.age >> s.marks) {
        cout << s.name << " " << s.age << " " << s.marks << endl;
    }

    inFile.close();
    return 0;
}
