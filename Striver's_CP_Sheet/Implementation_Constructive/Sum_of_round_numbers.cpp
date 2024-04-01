#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int number;
        cin>>number;
        vector<int> ans;
        int i = 1;

        while(number!=0){
            int temp = number%10;
            if(temp!=0) ans.push_back(i*(number%10));
            i *= 10;
            number /= 10;
        }

        cout<<ans.size()<<endl;

        for(int i=0; i<ans.size();i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;

    }
    return 0;
}