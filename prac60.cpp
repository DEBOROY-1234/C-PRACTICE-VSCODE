//addition using functions
#include<iostream>
using namespace std;
int print(int num){
    cout<<"the value input is "<<num<<endl;
    return 0;
}

int add(int num1,int num2){
    print(num1);
    print(num2);
    cout<<"the sum of the two input is"<<endl;
    return num1+num2;
}

int main(){
    int a,b;
    cout<<"enter the values of a and b respectively"<<endl;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}