#include <iostream>
#include <cmath>  // Include cmath for pow function
using namespace std;

bool armstrongNumber(int number) {
    int count = 0;
    int temp = number;
    int sum = 0;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    int temp2 = number;
    while (temp2 != 0) {
        int digit = temp2 % 10;
        sum += pow(digit, count);
        temp2 /= 10;
    }

    return (sum == number);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (armstrongNumber(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
