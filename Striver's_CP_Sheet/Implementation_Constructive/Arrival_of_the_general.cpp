#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> lineUp(n);

    int minIndex = 0;
    int maxIndex = 0;
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    int count = 0;

    cin>>lineUp[0];

    for(int i=1;i<n;i++){
        cin>>lineUp[i];
        if(lineUp[i]<=lineUp[minIndex]){
            minIndex = i;
            minimum = lineUp[i];
        }
        if(lineUp[i]>lineUp[maxIndex]){
            maxIndex = i;
            maximum = lineUp[i];
        }
    }

    int i = 1;
    while()

}