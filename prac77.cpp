#include<iostream>
using namespace std;
int main(){
    int n,position;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\n enter the "<<i+1<<" element of the array : ";
        cin>>arr[i];
    }
    cout<<"---------------------------------------------------"<<endl;
    cout<<"\n the created array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n enter the position where you want to delete the located element"<<endl;
    cin>>position;
    if (position>=n+1)
    {
        cout<<"\n invalid position,please run the program again using valid postion \n";
    }
    else{
        for (int i = position-1; i < n-1; i++)
        {
            arr[i]=arr[i+1];
        }
        
    }
    cout<<"array after deletion of the element at the located position"<<endl;
    for (int i = 0; i < n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}