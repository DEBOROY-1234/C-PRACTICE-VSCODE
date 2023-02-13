#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;

    b=a+b;
    a=b-a;
    b=b-a;

    cout<<"the values of a and b are "<<a<<" and "<<b<<" resp ";
    return 0;
}