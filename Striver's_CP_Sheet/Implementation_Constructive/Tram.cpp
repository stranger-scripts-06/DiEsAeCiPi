#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int maximum = INT_MIN;
    int current = 0;
    int out, in;

    for(int i=0;i<n;i++){

        cin>>out>>in;
        current += (in - out);
        maximum = max(current, maximum);

    }

    cout<<maximum<<endl;

    return 0;

}