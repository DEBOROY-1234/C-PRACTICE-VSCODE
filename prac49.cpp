//Write a program in C++ to print all ASCII character with their values.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"input the starting values of ascii character"<<endl;
    cin>>a;
    cout<<"input the ending value of the ascii character"<<endl;
    cin>>b;
    char ch;
    for(int i=a;i<=b;i++){
        ch=i;
        cout<<i<<" corressponding ascii character -----> "<<ch<<endl;
    }

}