#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> matrix(5,(vector<int>(5)));
    int ans;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int num;
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                ans = abs(i-2) + abs(j-2);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}