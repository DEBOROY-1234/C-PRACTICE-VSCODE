#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];
    }

    cout<<"the array created is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"sorting of the array "<<endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; i++)
        {
            if (arr[j]>arr[i])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        cout<<"array is now sorted"<<endl;
        
    }
    cout<<"enter the Kth largest element you want to see"<<endl;
    cin>>k;
    cout<<"the "<<k<<" largest term is "<<arr[k-1]<<endl;
    
    return 0;
}