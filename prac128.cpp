//STRING : small to capital and vce vesa using TRANSFORM() function

#include<iostream>
using namespace std;

#include<string>
#include<algorithm>
int main(){
    string s;
    
    cout<<"enter a string "<<endl;
    getline(cin,s);


    // learn this function you brat 
    transform(s.begin(),s.end(),s.begin() ,:: toupper);
    cout<<s;

    cout<<"\n";
    
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;

    return 0;
}