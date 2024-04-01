#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string convert2Binary(int n){

    string res;

    if(n==0) return 0;

    while(n>0){
        res = to_string(n % 2) + res; 
    }

    return res;

}

int main(){

    int n;
    cin>>n;

    cout<<convert2Binary(n)<<endl;

    return 0;

}