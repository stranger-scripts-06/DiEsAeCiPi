#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> problems(n);

    bool flag = false;

    for(int i=0;i<n;i++){
        cin>>problems[i];
        if(problems[i]==1) flag = true;
    }

    if(flag==true) cout<<"Hard"<<endl;
    else cout<<"Easy"<<endl;

    return 0;

}