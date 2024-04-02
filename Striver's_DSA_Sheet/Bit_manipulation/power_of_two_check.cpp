// Check of the number is a power of 2

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

int main(){

    int n;
    cin>>n;

    string binN = decimalToBinary(n);
    string binN1 = decimalToBinary(n-1);

    int num1 = bitset<32>(binN).to_ulong();
    int num2 = bitset<32>(binN1).to_ulong();

    if((num1 & num2)==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}