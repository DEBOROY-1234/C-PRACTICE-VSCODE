#include<iostream>
using namespace std;
int main(){
    int n,space;
    cout<<"enter the no.of rows"<<endl;
    cin>>n;
    space=n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int k = space; k >=1; k--)
        {
            cout<<" ";
        }
        for (int j = 1; j <=2*i-1 ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        space--;

        
        
    }
    
    return 0;
}