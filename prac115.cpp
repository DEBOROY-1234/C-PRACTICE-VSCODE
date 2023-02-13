//STRING : reverse

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    int n=str.size();
    for (int i = n-1;i>=0 ; i--)
    {
        cout<<str[i];
    }
    
    return 0;
}