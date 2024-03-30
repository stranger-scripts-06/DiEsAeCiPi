#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long num;
    cin>>num;
    long long ans=0;
    long long i=1,rem;

    while(num>0){

        rem = num%10;
        rem = min(rem,9-rem);
        num /= 10;
        ans += rem*i;
        i *= 10;

    }

    if(ans<(i/10)) cout<<(i*9/10)+ans<<endl;
    else cout<<ans<<endl;

    return 0;
}