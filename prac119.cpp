//MAXIMUM OF ARRAY USING FUNCTIONS
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int mx=0;

    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"created array is \n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        mx=max(mx,arr[i]);
    }
    cout<<" \n "<<mx<<endl;
    
    
    return 0;
}