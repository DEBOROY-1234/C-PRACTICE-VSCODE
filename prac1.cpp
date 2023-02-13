#include<iostream>
using namespace std;
int main(){
    int a,b,o,r;
    cout<<"enter a number "<<endl;
    cin>>a;
    cout<<"enter another number"<<endl;
    cin>>b;
    cout<<"choose the operation you want to run"<<endl;
    cout<<"1.addition    2.substraction      3.multiplication      4.division"<<endl;
    cin>>o;

    switch (o)
    {
    case 1 :
        cout<<a+b<<endl;
        break;
    
    case 2:
        cout<<a-b<<endl;
        break;
    case 3 :
        cout<<a*b<<endl;
        break;
    case 4:
        cout<<a/b<<endl;
        break;
    
    default:
        cout<<"wrong option selected"<<endl;
        break;
    }
    return 0;
}