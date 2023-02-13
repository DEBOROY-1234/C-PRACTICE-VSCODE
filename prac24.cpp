//Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a the no.of terms of the series"<<endl;
    cin>>n;
    float sum=1,t=1;
    for(int i=1;i<=n;i++){
        cout<<t<<" ";
        t=t*10+1;
        sum=sum+t;
    }
    cout<<"\n the sum of the series is "<<sum<<endl;
    return 0;
}