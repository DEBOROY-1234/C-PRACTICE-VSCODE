//Write a program in C++ to calculate product of digits of any number.
#include<iostream>
using namespace std;
int main(){
    int n,prod=1,rem;
    cout<<"enter the number"<<endl;
    cin>>n;
    int num=n;
    for(int i=num;i>0;i=i/10){
        rem=i%10;
        prod=prod*rem;
    }
    cout<<"the product of digits of "<<n<<" is "<<prod;

    return 0;
}