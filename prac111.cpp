//CHAR ARRAY: declaring a char array and accessing its values
#include<iostream>
using namespace std;
int main(){
    char arr[50];
    int i=0,n;
    cout<<"enter a string "<<endl;
    cin>>arr;
    while (arr[i]!='\0')
    {
        cout<<arr[i]<<"\n";
        i++;
    }
    
    cout<<"\n ------------------------------------------------- \n "<<"enter the index of the chcarcter you want to print : \n";
    cin>>n;
    cout<<arr[n];
    return 0;
}