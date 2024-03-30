#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(int i, string s){

    if(i>=s.length()/2) return true;
    if(s[i] != s[s.length()-i-1]) return false;

    return palindromeCheck(i+1,s);

}

int main(){

    int i;
    string s;
    cin>>s;

    cout<<palindromeCheck(0, s);

    return 0;   

}