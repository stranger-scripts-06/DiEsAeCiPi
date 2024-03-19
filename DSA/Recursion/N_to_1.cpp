#include <iostream>
using namespace std;

void printNumbers(int n){

    if(n==0){
        return;
    }
    else{
        cout<<n<<" ";
    }
    
    return printNumbers(n-1);
}

int main(){
    int n;
    cin>>n;
    printNumbers(n);
    return 0;
}