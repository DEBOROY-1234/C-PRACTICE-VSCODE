//GOOGLE KICKSTART QUESTION : RECORD BREAKING DAY {apna collge} 
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
     
    int arr[n];

    cout<<"input elements of the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"creation done "<<endl;

    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            cout<<"record breaking day"<<arr[i]<<endl;
        }
        
        
    }
    
    return 0;
}