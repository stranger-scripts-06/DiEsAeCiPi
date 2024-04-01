#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int binaryNum, i;
    cin>>binaryNum>>i;

    if((binaryNum & (1<<i))!=0) cout<<"Bit is set"<<endl;
    else cout<<"Bit is not set"<<endl;

    return 0;

}