// Problem Statement : Given an array print all the sum of the subset generated from it, in the increasing order.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> array, int index, int n, int sum){

    if(index == n){
        cout<<sum<<endl;
        return;
    }

    subsetSum(array, index, n, sum+array[index]);
    subsetSum(array, index+1, n, sum);

}

int main(){

    int n, index, sum;
    cin>>n;
    vector<int> array(n);

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    subsetSum(array, 0, n, 0);

    return 0;

}