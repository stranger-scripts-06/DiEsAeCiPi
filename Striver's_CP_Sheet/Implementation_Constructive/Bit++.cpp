#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string operation;
    int x = 0;

    for(int i=0;i<n;i++){

        cin>>operation;
        
        if(operation[1]=='+') x++;
        else x--;
    }

    cout<<x<<endl;

    return 0;

}