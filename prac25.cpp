//Write a program in C++ to display the first n terms of Fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n,n1=0,n2=1,num;
    cout<<"enter the no.of terms"<<endl;
    cin>>num;
    cout<<n1<<" "<<n2;
    for ( int i = 2; i < num; i++)  //loop starts printing from 2 as 0 and 1 are already printed
    {
        n=n1+n2;
        cout<<" "<<n;
        n=n1+n2;
        n1=n2;
        n2=n;
    }
    
    return 0;
}