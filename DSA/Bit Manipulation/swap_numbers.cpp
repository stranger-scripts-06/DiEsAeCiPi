#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapNumbers(int& a, int& b){

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<a<<" "<<b<<endl;

    return;

}

int main(){

    int a, b;
    cin>>a>>b;

    swapNumbers(a, b);

    return 0;

}