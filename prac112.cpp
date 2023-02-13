//CHAR ARRAY: pallindrom

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of letters in the word : "<<endl;
    cin>>n;

    char arr[n+1];
    cout<<"enter the string "<<endl;
    cin>>arr;

    bool check=1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[n-1-i])
        {
            check=0;   //checking whether all the values are same or not
            break;
        }
        
    }

    if (check==true)             //checking the bool condition
    {
        cout<<"pallindrom \n";
    }
    else{
        cout<<"not pallindrom \n";
    }
    
    

    return 0;
}