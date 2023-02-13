//9 + 99 + 999 + ...................
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number of terms"<<endl;
    cin>>n;
    int t=9;
    for (int i = 0; i < n; i++)
    {
        sum=sum+t;
        cout<<t<<" ";
        t=t*10+9;
    }
    cout<<"\n the sum of the series is "<<sum<<endl;
    
    return 0;
}