//STRING: find particular element from a string & INSERTION of new value
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string s,s1;
    int n;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    cout<<"enter the position of letters you want to find \n";
    cin>>s;
    cout<<"\n the initial position/index of the letter "<<s<<" is "<<str.find(s);

    cout<<"\n ----------------------INSERTION using string.insert(n,m) function -----------------"<<endl;
    cout<<"enter the index you want to put the new letters :  "<<endl;
    cin>>n;
    cout<<"\n enter the string you wamt to add : "<<endl;
    cin>>s1;

    cout<<"the new string is : "<<str.insert(n,s1);

    return 0;
}