//sum of fisrt n natural numbers
#include<iostream>
using namespace std;
int main(){
    int i,n,c=0;
    cout<<"enter the fisrt n namtural numbers whose sum you want"<<endl;
    cin>>n;
    cout<<"the first 10 natural numbers are"<<endl;
    for(i=0;i<=n;i++)
    {
        cout<<i<<endl;
        c=c+i;

    }
    cout<<"the sum is "<<c<<endl;
    return 0;
}