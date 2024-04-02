#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()

{
    int N;
    cin>>N;

    int count=0;

    while(N>1){
        if(N%2==1) count++;
        N /= 2;
    }
    if(N==1) count++;

    cout<<count<<endl;

    return 0;

}