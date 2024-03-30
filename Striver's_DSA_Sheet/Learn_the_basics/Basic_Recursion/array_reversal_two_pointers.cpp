#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void arrayReversal(int l, int r, vector<int>& nums){

    if(l>=r){
        return;
    }

    swap(nums[l],nums[r]);

    arrayReversal(l+1, r-1, nums);

}

int main(){

    int l, r, n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    arrayReversal(0, n-1, nums);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    return 0;

}