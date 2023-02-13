//STRING : comparing two strings

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    string s2;
    cout<<"enter 1st string \n";
    getline(cin,s1);
    cout<<"\n enter the 2nd string \n";
    getline(cin,s2);
    if (s2.compare(s1)==0)   //equal for output= '0'  /*can also be done by writing '!s2.compare(s1) ' inside the loop statement*/
    {
        cout<<"strings are euqal "<<endl;
    }
    
    
    else{
        cout<<"strings not euqal \n";
    }

    cout<<"-----------------------"<<endl<<"\n using empty() to clear the content of the string \n"<<endl<<"----------------"<<endl;
    s1.clear();
    if (s1.empty())
    {
        cout<<"\n string is now empty"<<endl;
    }
    else{
        cout<<"\n string is not empty \n";
    }
    
    
    return 0;
}