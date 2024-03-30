#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int numberOfGlasses = (k*l/nl)/n;
    int numberOfSalt = (p/np)/n;
    int numberOfLime = (c*d)/n;

    int halfAns = min(numberOfGlasses, numberOfLime) ;
    cout<<min(halfAns, numberOfSalt)<<endl;

    return 0;
}