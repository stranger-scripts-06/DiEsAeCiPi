#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printNTimes(int n){

    if(n==0){
        return;
    }

    cout<<"Sanhita"<<endl;

    printNTimes(n-1);

}

int main(){

    int n;
    cin>>n;

    printNTimes(n);

    return 0;

}