//Find the length of a string without using the library function
#include<iostream>
using namespace std;
int main(){
    char str[50];           //taking a character string i.e a array that will store characters.
    int l=0;
    cout<<"enter  a string whose lenght you want to find."<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        l++;
    }
    cout<<"length of the string is "<<l;
    return 0;
}