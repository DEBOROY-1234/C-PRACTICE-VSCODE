//to delete a particular value of a array containing distinct elements

#include<iostream>
using namespace std;
int main(){
    int n,found=0;
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

    int element;
    cout<<"\n enter the element you want to delete"<<endl;
    cin>>element;

    int position;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
            found=1;
            position=i;
            break;
            
        }
        
    }

    if (found==1)
    {
        for (int i =position; i < n-1; i++)
        {
            arr[i]=arr[i+1];
        }
        
    }
    else{
        cout<<endl<<"\n element "<<element<<" is not found in the array "<<" ";
    }
    cout<<"\n array after the deletion of the element \n";
    for (int i = 0; i < n-1; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}