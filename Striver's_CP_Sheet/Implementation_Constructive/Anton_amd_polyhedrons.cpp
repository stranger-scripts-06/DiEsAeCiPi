#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string shape;
    int faces = 0;

    for(int i=0;i<n;i++){

        cin>>shape;
        if(shape == "Tetrahedron") faces += 4;
        else if(shape == "Cube") faces += 6;
        else if(shape == "Octahedron") faces += 8;
        else if(shape == "Dodecahedron") faces += 12;
        else if(shape == "Icosahedron") faces += 20;

    }

    cout<<faces<<endl;

    return 0;

}