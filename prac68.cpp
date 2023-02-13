#include<iostream>
using namespace std;
int main(){

    int n;   
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<" enter the " <<i+1<<" element of the array "<<endl;
        cin>>arr[i];
    }
    cout<<"the elements of the array are"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }


    cout<<endl;
    
    cout<<" the maximum value is "<<*max(arr,n);
    return 0;
    
}

int *max(int array[],int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j]>array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=array[i];
            }
            
        }
        
    }
    cout<<"the sorted array is "<<endl;
    int max=array[0];
    return max;
}