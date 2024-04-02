
// Print subsequences whose sum is equal to k;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sbsWithSumK(int index, int n, int sum, int s, vector<int>& sequence, vector<int>& subseq){

    if(index==n){
        if(s == sum){
            for(int i=0;i<subseq.size();i++){
            cout<<subseq[i]<<" ";
        }
        cout<<endl;
        }
        return;
    }

    subseq.push_back(sequence[index]);
    s += sequence[index];
    sbsWithSumK(index + 1, n, sum, s, sequence, subseq);
    subseq.pop_back();
    s -= sequence[index];
    sbsWithSumK(index + 1, n, sum, s, sequence, subseq);

}

int main(){

    int index, n, sum, s; 
    cin>>n;
    vector<int> sequence(n); 
    vector<int> subseq;

    for(int i=0;i<n;i++){
        cin>>sequence[i];
    }
    cin>>sum;
    
    sbsWithSumK(0, n, sum, 0, sequence, subseq);

    return 0;

}