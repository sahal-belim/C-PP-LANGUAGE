#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int n;

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        numbers.push_back(n);
    }

    cout << "You entered: ";
    for (int x : numbers)
        cout << x << " ";
    cout << endl;

    sort(numbers.begin(), numbers.end());
    cout << "Sorted: ";
    for (int x : numbers)
        cout << x << " ";
    cout << endl;

    return 0;
}
