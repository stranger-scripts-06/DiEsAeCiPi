#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin>>x;
    int ans = 0;
    
    while(x>0){
        int rem = x%10;
        ans = ans*10 + rem;
        x /= 10;
    }

    cout<<ans<<endl;

    return 0;

}