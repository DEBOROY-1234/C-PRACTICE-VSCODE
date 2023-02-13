//RECURSION : sum of digits 

#include<iostream>
using namespace std;

int sumofdigits(int num);
int main(){
    int n;
    cout<<"enter the number whose sum of digits you want"<<endl;
    cin>>n;
    cout<<"the sum of digits of the number is "<<sumofdigits(n);
    return 0;
}

int sumofdigits(int num){

    int r=0;
    if (num==1)
    {
        return (1);
    }
    else{
        return ((num%10)+sumofdigits(num/10));
    }
}