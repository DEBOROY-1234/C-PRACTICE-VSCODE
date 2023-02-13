//pattern 4
#include<iostream>
using namespace std;
int main(){

    int n,k=1;
    cout<<"enter the no.of rows";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    
    return 0;
}