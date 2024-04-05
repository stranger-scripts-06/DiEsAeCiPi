#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int subsets = pow(2, n);

    for(int i=0;i<subsets;i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)) cout<<nums[j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}