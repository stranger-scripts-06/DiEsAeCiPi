#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int xor1toN(int n){

    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    else return n;

}

int main(){

    int l, r;
    cin>>l>>r;

    cout<<(xor1toN(l)^xor1toN(r));

    return 0;

}