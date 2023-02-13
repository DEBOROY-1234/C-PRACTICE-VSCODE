//reversing the values of the array
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<" enter the size of the array"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element "<<i<<" of the array ";
        cin>>arr[i];
    }
    cout<<"the elements of the array are ";
    for (int i = 0; i < n; i++)
    {
        
        cout<<arr[i]<<" ";
    }
    cout<<" the reverse of the array is "<<endl;
    
    for (int i =n-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}