//lcm of two numbers using hcf
#include<iostream>
using namespace std;
int main(){
    int a,b,hcf,lcm;
    cout<<"enter the number whose lcm you want "<<endl;
    cin>>a>>b;
    for ( int i = 1; i<= a && i<=b;i++)     //the value of i shoul start from 1 bcz 0 cant be taken 
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;   
        }
    }
    
    lcm=(a*b)/hcf;
    cout<<"the lcm of two number are "<<lcm;
    return 0;

}