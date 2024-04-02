
// Calculate minimum bit flips needed to convert a number a into b

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n) {
    string binary;
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return (binary.empty() ? "0" : binary);
}

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1); // Flip the rightmost set bit to 0
        count++;
    }
    return count;
}

int main(){

    int a, b;
    cin>>a>>b;

    string binA = decimalToBinary(a);
    string binB = decimalToBinary(b);

    int num1 = bitset<32>(binA).to_ulong();
    int num2 = bitset<32>(binB).to_ulong();

    int ans = num1^num2;

    cout<<countSetBits(ans)<<endl;

    return 0;
}