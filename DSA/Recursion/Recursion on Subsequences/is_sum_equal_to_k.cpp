
// Check if there exist subsequences whose sum is equal to k


// Print subsequences whose sum is equal to k;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sbsWithSumK(int index, int n, int sum, int s, vector<int>& sequence){

    if(index==n){
        if(s == sum){
            return true;
        }
        else return false;
    }
    

    s += sequence[index];
    if(sbsWithSumK(index + 1, n, sum, s, sequence)==true)return true; // inorder to terminate the function as soon we find suhc subsequence
    s -= sequence[index];
    if(sbsWithSumK(index + 1, n, sum, s, sequence)==true)return true;

    return false;

}

int main(){

    int index, n, sum, s; 
    cin>>n;
    vector<int> sequence(n); 

    for(int i=0;i<n;i++){
        cin>>sequence[i];
    }
    cin>>sum;
    
    cout<<sbsWithSumK(0, n, sum, 0, sequence)<<endl;

    return 0;

}