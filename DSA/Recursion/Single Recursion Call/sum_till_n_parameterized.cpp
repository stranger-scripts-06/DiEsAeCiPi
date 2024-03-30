#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sumTillN(int i, int sum){

    if(i==0){
        cout<<sum<<endl;
        return;
    }

    sumTillN(i-1,sum+i);

}

int main(){

    int n;
    cin>>n;

    sumTillN(n, 0);

    return 0;

}