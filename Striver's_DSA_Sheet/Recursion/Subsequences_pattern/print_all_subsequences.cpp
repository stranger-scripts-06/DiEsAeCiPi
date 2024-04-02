#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int index, vector<int>& subseq, vector<int>& sequence, int n){

    if(index>=n){
        for(int i=0;i<subseq.size();i++){
            cout<<subseq[i]<<" ";
        }
        cout<<endl;
        return;
    }

    subseq.push_back(sequence[index]);
    printSubsequences(index+1, subseq, sequence, n);
    subseq.pop_back();
    printSubsequences(index+1, subseq, sequence, n);

}

int main(){

    int n, index;
    cin>>n;
    vector<int> subseq;
    vector<int> sequence(n);
    for(int i=0;i<n;i++){
        cin>>sequence[i];
    }

    printSubsequences(0, subseq, sequence, n);

    return 0;

}