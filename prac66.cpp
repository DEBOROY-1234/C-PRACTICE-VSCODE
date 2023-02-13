#include<iostream>
using namespace std;

int checkprime(int n1)
{
    int i=2;
    while(i<=n1/2)
    {
         if(n1%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}

int main(){
    int n;
    cout<<"enter the number you want to check prime or not"<<endl;
    cin>>n;
    if (checkprime(n)==1)
    {
        cout<<n<<" is prime "<<endl;

    }
    else{
        cout<<n<<" is not prime"<<endl;
    }
    
    return 0;
}