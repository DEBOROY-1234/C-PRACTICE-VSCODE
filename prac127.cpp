//STRING : convert a entire string into upper case or lower case


//using toupper functions 
#include<iostream>
using namespace std;
int main(){
    string s;
    int choice;
    cout<<"enter a string "<<endl;
    getline(cin,s);

    cout<<"emter the choice: 1.uppercase \n 2.lowercase "<<endl;
    cin>>choice;

    int n=s.size();
    for (int i = 0; i < n; i++)
    {
        if (choice==1)
        {
            s[i]=toupper(s[i]);
            cout<<s[i];
        }
        else if (choice==2)
        {
            s[i]==tolower(s[i]);
            cout<<s[i];
        }
        
        
    }
    
    return 0;
}