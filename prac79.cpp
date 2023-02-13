//maximum and minimum value in an array

#include<iostream>
#include<algorithm>

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

    sort(arr,arr+n);
    cout<<"\n now the sorted array is \n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n maximum value is "<<arr[n-1];
    cout<<"\n minimum value is "<<arr[0];


    return 0;
}