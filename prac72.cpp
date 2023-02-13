//sorting of array and finding the Kth largest term

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k,temp;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];
    }
        cout<<endl;
        cout<<endl;
        
        sort(arr,arr+n);
        
        cout<<"SORTED ARRAY is:"<<endl;
        
         for (int i = 0; i < n; i++)
        {
        cout<<arr[i]<<" ";
        }
        
        cout<<endl;
        cout<<endl;
        
    cout<<"enter the Kth largest element you want to see"<<endl;
    cin>>k;
    cout<<"The "<<k<<" largest term is : "<<arr[n-k]<<endl;
    
    return 0;
}