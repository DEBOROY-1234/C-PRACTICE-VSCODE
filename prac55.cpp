//to find the largest and smallest element in the array
#include<iostream>
using namespace std;
int main(){
    int n,max,min;
    cout<<"enter the no.of elements of a array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element "<<i+1<<" of the array :";
        cin>>arr[i];
    }
    cout<<"the elements of the array are :"<<endl;
    for (int i = 0; i < n; i++)
    {
        
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    max=0;
    min=0;
    for (int i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<" the largest element in the array is: "<<max;
    cout<<" the smallest element in the array is "<<min;
    
    
    
    return 0;
}