#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> houses(3);
    int distance;
    int minimum = INT_MAX;

    for(int i=0;i<3;i++){
        cin>>houses[i];
    }
    
    sort(houses.begin(), houses.end());

    for(int i=1;i<=houses[2];i++){
        distance = abs(houses[0]-i) + abs(houses[1]-i) + abs(houses[2]-i);
        minimum = min(minimum, distance);
    } 

    cout<<minimum<<endl;

    return 0;

}