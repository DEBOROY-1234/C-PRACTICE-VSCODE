//RECURSION: printing elemnts of an array 
#include<iostream>
using namespace std;

void printarray(int aar1[],int st,int num);
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i+1<<" element : "<<endl;
        cin>>arr[i];
    }

    printarray(arr,0,n);

    
    return 0;
}

void printarray(int arr1[],int st,int num){

    if (st>=1)
    
    return ;
    
    cout<<arr1[st];
    printarray( arr1, st+1, num);
    
}