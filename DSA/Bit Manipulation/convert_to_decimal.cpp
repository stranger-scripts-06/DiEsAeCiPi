#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int convert2Decimal(string binary){

    int n = binary.length();
    int ans = 0;
    int power = 1;

    for(int i = n-1;i>=0;i--){
        if(binary[i]=='1'){
            ans += power;
        }
        power *= 2;
    }

    return ans;

}

int main(){

    string binary;
    cin>>binary;

    cout<<convert2Decimal(binary)<<endl;

    return 0;

}