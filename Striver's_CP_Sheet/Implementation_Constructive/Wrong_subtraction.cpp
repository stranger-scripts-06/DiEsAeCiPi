#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int num, times;
    cin>>num>>times;

    for(int i=0;i<times;i++){

        if(num%10!=0) num--;
        else num /= 10;

    }

    cout<<num<<endl;

    return 0;

}