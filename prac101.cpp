//STRING : using append( ) function

#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"using appened function"<<endl<<"------------------------------------------------"<<endl;
    string str1;
    string str2;
    cout<<"\n enter a string : \n"<<endl;
    getline(cin,str1);
    cout<<"\n enter the string you want to append : \n"<<endl;
    getline(cin,str2);

    cout<<"new string after the appending : "<<str1.append(str2);
    
    cout<<"\n without using append function , instead using '+' ."<<endl<<"----------------------------"<<endl;
    string s1;
    string s2;
    cout<<"\n enter a string : \n"<<endl;
    getline(cin,s1);
    cout<<"\n enter the string you want to append : \n"<<endl;
    getline(cin,s2);
    s1=s1+s2;
    cout<<s1;
    return 0;
}