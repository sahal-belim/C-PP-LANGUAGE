#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("notes.txt");

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file << "Hello from C++ file handling!" << endl;
    file.close();

    ifstream readFile("notes.txt");
    string line;
    cout << "Reading from file:\n";
    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();
    return 0;
}
