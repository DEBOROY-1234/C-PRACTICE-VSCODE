//STRING : using string.clear() function
 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    int n;
    cout<<"\n enter the string you want to print \n ";
    getline(cin,s1);
    cout<<s1;
    cout<<"\n enter 1 if you want to clear the string \n";
    cin>>n;
    if (n==1)
    {
        cout<<"using string.clear() function \n ";
        s1.clear();
        cout<<"the value of string is : "<<s1<<"                         "<<"[no output]"<<endl;
    }
    else{
        cout<<s1<<endl;
    }

    
    return 0;
}