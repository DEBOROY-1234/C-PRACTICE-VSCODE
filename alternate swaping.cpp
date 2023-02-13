#include<iostream>
using namespace std;

int main(){
    
    int size; 
    cout<<"enter size"<<endl;
    cin>>size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    cout<<"created array"<<endl;
    for (int  i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }


    for (int i = 0; i < size; i=i+2)
    {
        if (i+1<size)
        {
            swap(a[i],a[i+1]);
        }
        
    }

    cout<<"swapped array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    
}