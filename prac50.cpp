//Write a program in C++ to find power of any number using for loop
#include<iostream>
using namespace std;
int main(){
    int n,e,r=1;
    cout<<"enter the base number : ";
    cin>>n;
    cout<<"enter the power to raised : ";
    cin>>e;
    for(int i=1;i<=e;i++){
        r=r*n;
       
    }
    cout<<r<<" ";
    
    return 0;
}