#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int i,t,j,n;
    cout<<"enter the five elements of the array"<<endl;

    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"unsorted order of the array :"<<endl;
    for ( i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    //sorting procedure

    for ( i = 0; i < 5; i++)
    {
        for (j = i+1; j <n ; j++)
        {
            if (arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            
        }
        
    }
    cout<<endl<<"sorted order of the array is"<<endl;
    for ( i = 0;i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
    
}