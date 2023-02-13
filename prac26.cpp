//Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for (int i = 100; i <= 200; i++)
    {
        if(i%9==0){
            cout<<i<<" ";
            sum=sum+i;
        }

    }
    cout<<"\n the sum of the numbers are "<<sum<<endl;
    
    return 0;
}