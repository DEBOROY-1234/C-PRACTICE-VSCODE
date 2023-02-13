#include<iostream>
using namespace std;
int main(){
    int n,t=0;
    
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];
    }
    cout<<"\n the elements of the array are"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i]<arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            
        }
        
    }
    cout<<"the sorted (descending order) array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}