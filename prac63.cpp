#include<iostream>
using namespace std;


int swap(int num1,int num2 ){
    int temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    
    return num1,num2;
}

int main(){
    int a ,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"before swaping values of a and b are "<<a<<" and "<<b<<" resp. "<<endl;
    swap(a,b);
    cout<<a<<b;
    return 0;
}