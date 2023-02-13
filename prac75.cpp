//inserting a new element in a array by removing the previous one

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i+1<<" element of the array : ";
        cin>>arr[i];
    }
    cout<<"---------------------------------------------------"<<endl;
    cout<<"the created array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int position,value;
    cout<<"enter the position you want to insert an array"<<endl;
    cin>>position;
    cout<<"enter the value you want to insert "<<endl;
    cin>>value;
    cout<<endl<<endl;

    //shifting the position from position to n from right

    for (int i = n-1; i >=position-1; i--)
    {
        arr[i+1]=arr[i];                //shifting the elememts backwards to create a space in between
    }
    arr[position-1]=value;
    cout<<"the new array is after the insertion of a new element"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}