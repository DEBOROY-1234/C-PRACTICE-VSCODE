// Write a program in C++ to find the sum of digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,rem;
    cout<<"enter the number whose sum of digits you want"<<endl;
    cin>>n;
    while (n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<sum<<endl;
    
    return 0;
}
