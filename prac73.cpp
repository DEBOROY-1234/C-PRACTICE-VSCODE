#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i+1<<" element of the array "<<endl;
        cin>>arr[i];
    }
    cout<<"the created array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    sort(arr,arr+n);
    cout<<"the sorted array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"the shortest element of the array is : "<<arr[0];
    
    
    return 0;
}