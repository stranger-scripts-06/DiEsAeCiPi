#include <iostream>
using namespace std;

// Recursive function to find GCD/HCF using Euclidean algorithm
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers to find their GCD/HCF: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);

    cout << "The GCD/HCF of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
