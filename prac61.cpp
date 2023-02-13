#include<iostream>
using namespace std;

int prime(int num1,int num2){

    cout<<"the prime numbers are"<<endl;
    for (int i = num1; i <=num2; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j!=0)
            {
                cout<<i<<" ";
            }
            
        }
        
        
    }
    return 0;
    
}
int main(){
    int a,b;
    cout<<"enter the initial and final number between which you will search for prime numbers"<<endl;
    cin>>a>>b;
    prime(a,b);
    return 0;
}