//sum of all elements of the array

#include<iostream>

using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\n enter the "<<i+1<<" element of the array : ";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"---------------------------------------------------"<<endl;
    cout<<"\n the created array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"the sum of all numeric element of the array is : "<<sum;

    return 0;
}
