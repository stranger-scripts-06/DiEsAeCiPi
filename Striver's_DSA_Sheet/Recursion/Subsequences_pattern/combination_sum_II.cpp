// Problem Statement : Given an array of distinct integers and a target, you have to return the list of all unique combinations where the chosen numbers sum to target. You may return the combinations in any order.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void combinationSum(int index, int target, vector<int>& array, vector<vector<int>>& ans, vector<int>& ds){

    if(index==array.size()){
        if(target==0){
            ans.push_back(ds);
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    if(array[index]<=target){
        ds.push_back(array[index]);
        combinationSum(index+1, target-array[index], array, ans, ds);
        ds.pop_back();
    }

    combinationSum(index+1, target, array, ans, ds);

}

int main(){

    int n, index, target;
    cin>>n;
    cin>>target;
    vector<int> array(n), ds;
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    

    combinationSum(0, target, array, ans, ds);

    return 0;

}