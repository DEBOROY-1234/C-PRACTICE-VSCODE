//RECURSION : first occurance of a number.
//error
#include<iostream>
using namespace std;

int firstoccu(int arr[],int n,int i,int key){

    if (i==n)
    {
        return -1;
    }
    
    if (arr[i]==key)
    {
        return i;
    }
    return firstoccu(arr,n,i+1,key);
    
}

int lastoccu(int arr[],int n,int i,int key){
    
    if (i==n)
    {
        return -1;
    }

    if (lastoccu(arr,n,i,key)!=-1)
    {
        return lastoccu(arr,n,i+1,key);
    }
    if (arr[i]==key)
    {
        return i;
    }
    return -1;
    
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i=0,key;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"number to find : "<<endl;
    cin>>key;

    cout<<firstoccu(arr,n,i,key);    
    
    return 0;
}
