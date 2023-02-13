#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string str1;            //inputing a string and getting the string 
    cout<<"\n enter  a string \n";
    getline(cin,str1);
    cout<<str1<<"\n";       //but the output would be wihtout space ,so values after space would not print

    cout<<"\n -------using string(n,'character') fucntion----------------"<<endl;
    string str(5,'n');   //repeats the value of 'n' 5 times. 
    cout<<str<<"\n";

    
    

    return 0;
}