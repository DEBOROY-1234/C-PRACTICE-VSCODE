//inputing a string and accessing its value via indexing

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s1;
    string s2;
    cout<<"\n enter a string : \n"<<endl;
    getline(cin,s1);
    cout<<"\n enter the string you want to append : \n"<<endl;
    getline(cin,s2);
    s1=s1+s2;
    cout<<s1;
    cout<<"\n now accessing the elements of the string via indexing \n "<<endl;
    cout<<"\n enter the index of the element you want to find \n ";
    cin>>n;
    cout<<s1[n];  //using array logic
    return 0;
}