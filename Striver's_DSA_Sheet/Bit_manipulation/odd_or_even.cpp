#include <iostream>
using namespace std;

bool isEven(int n) {
    // Check if the LSB (rightmost bit) is 0
    return (n & 1) == 0;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isEven(number)) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}
