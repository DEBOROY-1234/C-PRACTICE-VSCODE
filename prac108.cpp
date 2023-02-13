//STRING: to select particular set of elements from a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int n,m;
    cout<<"enter a string"<<endl;
    getline(cin,str);

    cout<<"enter the initial index from which you want to select a set of words : "<<endl;
    cin>>n;
    cout<<"enter the no.of words you want to select : "<<endl;
    cin>>m;
    
    cout<<"the word selected is "<<str.substr(n,m);
    return 0;
}

