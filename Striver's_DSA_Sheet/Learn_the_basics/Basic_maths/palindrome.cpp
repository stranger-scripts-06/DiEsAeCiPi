#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    bool flag = true;

    for(int i=0;i<s.length()/2;i++){

        if(s[i]!=s[s.length()-i-1]){
            flag = false;
            break;
        }

    }

    if(flag==true) cout<<"Its a palindrome"<<endl;
    else cout<<"Its not a palindrome"<<endl;

    return 0;

}