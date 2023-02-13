// STRING : Change every letter in a given string with the letter following it in the alphabet

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    int n=str.size();
    for (int i = 0;i<=n ; i++)
    {
        int char_code = int (str[i]);
        
        if (char_code==122)
        {
            str[i]==char(97);
            cout<<str[i];
        }
        else if (char_code==90)
        {
            str[i]==char(65);
            cout<<str[i];
        }
        else if (char_code>=65 && char_code<=90 || char_code>=97 && char_code<=122)
        {
            str[i]=char(char_code+1);
            cout<<str[i];
        }
        
        
        
    }
    
    return 0;
}