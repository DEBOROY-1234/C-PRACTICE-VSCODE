//STRING: accessing the size and length of the array
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string s,s1;
    int n;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    cout<<"the length of the string is "<<str.size();
    
    cout<<"\n accessing the length of the array "<<endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i]<<"\n";
    }
    return 0;
    
}