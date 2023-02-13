//STRING : Capitalize the first letter of each word of a given string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    int n=str.size();
    for (int i = 0; i < n; i++)
    {
        if (i==0)    //accessing the first element to capitalize
        {
            str[i]=toupper(str[i]);
            cout<<str[i];
        }
        else if (str[i-1]==' ')
        {
            str[i]=toupper(str[i]);
            cout<<str[i];
        }
        else{
            cout<<str[i];
        }
        
        
    }
    return 0;
}