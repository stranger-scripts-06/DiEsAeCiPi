#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int binaryNum, i;
    cin>>binaryNum>>i;

    cout<<(binaryNum|=(1<<i));

    return 0;

}