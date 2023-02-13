//RECURSION : factorial 

#include<iostream>
using namespace std;

int factorial(int num);
int main(){
    int n;
    cout<<"enter the number whose factorial you want "<<endl;
    cin>>n;
    cout<<"the factorial of the number is "<<factorial(n);
    return 0;
}

int factorial(int num){
    if (num==1)
    {
        return (1);
    }
    else{
        return num*factorial(num-1);
    }
}