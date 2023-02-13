//Write a program in C++ to find the sum of first and last digit of a number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int last=n%10;
    int first=n;
    for (first = n;first>=10;first=first/10);
    
        cout<<"the fisrt digit of the number is"<<first<<endl;
        cout<<"the last digit of the number is "<<last<<endl;
    
    
    return 0;
}