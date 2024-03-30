#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void printNto1(int i, int n){

//     if(i==0){
//         return;
//     }

//     cout<<i<<" ";

//     printNto1(i-1, n);
// }

// int main(){

//     int i, n;
//     cin>>n;

//     printNto1(n, n);

//     return 0;

// }

// using backtracking

void printNto1(int i, int n){

    if(i>n){
        return;
    }

    printNto1(i+1, n);

    cout<<i<<" ";

}

int main(){

    int i, n;
    cin>>n;

    printNto1(1, n);

    return 0;

}
