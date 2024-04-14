#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long num;
    cin>>num;
    int count = 0;

        while(num>0){
            int rem = num%10;
            if(rem==4 || rem==7) count++;
            num /= 10;
        }
    

    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}