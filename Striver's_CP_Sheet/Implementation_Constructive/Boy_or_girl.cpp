#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string name;
    cin>>name;
    int n = name.length();
    int count = 0;
    unordered_map<char, int> freq;

    for(int i=0;i<n;i++){
        freq[name[i]]++;
    }

    for(auto& it : freq){
        count++;
    }

    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;

}