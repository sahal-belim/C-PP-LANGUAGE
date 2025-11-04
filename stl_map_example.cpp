#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks;
    marks["Alice"] = 90;
    marks["Bob"] = 75;
    marks["Charlie"] = 85;

    cout << "Student Marks:\n";
    for (auto &entry : marks)
        cout << entry.first << " : " << entry.second << endl;

    return 0;
}
