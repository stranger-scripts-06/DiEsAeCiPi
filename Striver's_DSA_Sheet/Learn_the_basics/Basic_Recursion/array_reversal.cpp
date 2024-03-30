#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void arrayReversal(int i, int n, vector<int>& nums){

    if(i>=n/2){
        return;
    }

    swap(nums[i],nums[n-i-1]);

    arrayReversal(i+1, n, nums);

}

int main(){

    int i, n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    arrayReversal(0, n, nums);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    return 0;

}