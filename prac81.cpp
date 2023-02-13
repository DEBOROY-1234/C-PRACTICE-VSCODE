//occurance of element in the array

#include<iostream>

using namespace std;

int main(){
    int n,e,c=0;
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
    cout<<"\n enter the elements whose occurance you want to know"<<endl;
    cin>>e;
    for (int i = 0; i < n; i++)
    {
        if (e==arr[i])
        {
            c++;
        }
        
    }
    cout<<"number of times the element "<<e<<" occurs is "<<c<<" times ";


    return 0;
}