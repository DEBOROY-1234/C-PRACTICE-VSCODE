//STRING: erase particular elimante from a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int n,m;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    cout<<"enter the index of the element : "<<endl;
    cin>>n;
    cout<<"enter the number of letters you want to delete after the index : "<<endl;
    cin>>m;
    str.erase(n,m);
    cout<<"the new string is : "<<str;
    return 0;
}