//swapping two numbers by using third variable

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<a<<endl;
    cout<<"the value of a and b are"<<a<<" and "<<b<<"resp"<<endl;
    return 0;
}