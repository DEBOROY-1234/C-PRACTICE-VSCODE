#include<iostream>
using namespace std;

int product(int x,int y){
    return x*y;
}

int main(){
    int a,b;
    cout<<"enter the two numbers whose product you want"<<endl;
    cin>>a>>b;
    cout<<"the product of the two numbers is "<<product(a,b);
    return 0;
}