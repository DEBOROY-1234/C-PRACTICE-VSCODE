#include<iostream>
using namespace std;

int checkprime(int n);
int main(){
    int num;
    int i=num/2;
    cout<<"enter the number you want to check prime or not "<<endl;
    cin>>num;
    if (checkprime==1)
    {
        cout<<num<<" is a prime number "<<endl;
    }
    else{
        cout<<num<<" is not a prime number "<<endl;

    }
    return 0;
}

int checkprime(int n){

    if (n==1)
    {
        return (1);
    }
    else if(n%i==0){
        return 0;
    
    i=i-1;
    checkprime(n);
    }
    

}