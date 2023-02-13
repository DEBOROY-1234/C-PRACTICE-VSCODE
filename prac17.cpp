//Write a program in C++ to list non-prime numbers from 1 to an upperbound.
#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"the number till which you want non prime numbers"<<endl;
    cin>>n;
    cout<<"the non prime numbers are ";

    for ( int i = 1; i <= n; i++)
    {
        for ( int t = 1; t <= i; t++)
        {
            if (i%t==0)
            {
                c++;
            }
            
        }
        if (c>2)
        {
            cout<<i<<endl;
        }
        c=0;
        
    }
    
    return 0;
}