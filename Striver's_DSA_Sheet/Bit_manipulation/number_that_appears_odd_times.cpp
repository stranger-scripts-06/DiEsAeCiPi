
// Print the number that appears odd number of times

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
    vector<int> nums;

    for(int i=0;i<n;i++){
        int number;
        cin>>number;
        string num = decimalToBinary(number);
        int finalnum = bitset<32>(num).to_ulong();
        nums.push_back(finalnum);
    }

    int XOR = nums[n-1];
    for(int i=0;i<n-1;i++){
        XOR = XOR^nums[i];
    }

    cout<<XOR<<endl;

    return 0;

}