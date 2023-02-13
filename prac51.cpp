#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number whose factors you want"<<endl;
    cin>>n;
    cout<<"the factors are : "<<endl;
    for (int i = 1; i<n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
    
    return 0;
}