//decimal to binary conversion

#include<iostream>
using namespace std;
int main(){
    int i,j,q,dec;
    int bin[8];
    cout<<"enter the decimal number"<<endl;
    cin>>dec;
    q=dec;
    for ( i = 0; i < 10; i++)
    {
        bin[i]=q%2;
        q=q/2;
    }
    cout<<"the binary number is"<<endl;
    for ( j = i-1; j >=0; j--)
    {
        cout<<bin[j];
    }
    
    return 0;
}