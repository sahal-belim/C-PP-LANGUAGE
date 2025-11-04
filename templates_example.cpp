#include <iostream>
using namespace std;

template <typename T>
T addNumbers(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << addNumbers(5, 3) << endl;
    cout << "Sum of doubles: " << addNumbers(5.6, 3.4) << endl;
    return 0;
}
