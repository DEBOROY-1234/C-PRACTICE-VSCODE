//recurion : check sorted or not

#include<iostream>
using namespace std;


bool sorted(int a[],int size){

    if (size==1)
    {
        return true;
    }
    
    bool restarray=sorted(a+1,size-1);
    return (a[0]<a[1] && restarray);
    
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int a=sorted(arr,n);
    if (a==1)
    {
        cout<<"sorted";
    }
    else{
        cout<<"unsorted";
    }
    
    
    return 0;
}