//BIT MANIPULATION: check whether  a number is a power of 2 or not

#include<iostream>
using namespace std;


bool ispowerof2(int n){

    return (n && !(n&n-1));
}


int main(){
    int n;
    cin>>n;
    int a=ispowerof2(n);
    if (a==1)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
    return 0;
}