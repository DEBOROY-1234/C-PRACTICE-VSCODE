//SUM OF SUBARRAYS OF A ARRAY 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the array elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int curr=0;
    for (int i = 0; i < n; i++)
    {
        curr=0;
        for (int j = i; j < n; j++)
        {
            curr=curr+arr[j];
        }
        cout<<"\n"<<curr;
        
    }
    
    return 0;
}