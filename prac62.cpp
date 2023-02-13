//power of a funciton using functions
#include<iostream>
#include<math.h>
using namespace std;

int power(int num1,int num2){

    cout<<"the result is "<<pow(num1,num2);
    return 0;
    
}


int main(){
    int a,b;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"enter the power to be raised"<<endl;
    cin>>b;
    power(a,b);
    return 0;
}