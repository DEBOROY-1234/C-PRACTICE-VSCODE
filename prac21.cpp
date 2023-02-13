//Display the n terms of odd natural number and their sum
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,r;
    cout<<"input number of terms"<<endl;
    cin>>n;
    cout<<"the odd numbers are "<<endl;
    for (int i = 1; i <= n; i++)
    {
        //odd terms are given as "2i-1" where "i" is the number of terms
        r=2*i-1;
        cout<<r<<endl;
        sum+=r;
    }
    cout<<"sum is "<<sum;
    
    return 0;
}