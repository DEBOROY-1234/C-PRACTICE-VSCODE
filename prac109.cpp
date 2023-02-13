//STRING: integer to string  &  string to integer functions

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int x=786;

    cout<<"-------------------integer to string function--------------------"<<endl;
    cout<<to_string(x)+"2"<<endl;       //conversion of numeric to string
    
    cout<<"-----------------string to integer function----------------------"<<endl;
    string s1;
    s1="786";
    int y=stoi(s1);
    cout<<"OUTPUT : "<<x+2<<endl;
    return 0;
}