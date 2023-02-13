//STRING: sorting of the data in ascending order using FUNCTION

#include<iostream>
#include<algorithm>  //to sort the data
#include<string>        //  to use string 
using namespace std;
int main(){
    string str,s1;
    cout<<"enter the string you to sort"<<endl;
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
    return 0;
}