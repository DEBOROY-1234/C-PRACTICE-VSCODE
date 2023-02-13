#include<iostream>
using namespace std;
int main(){
#i
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

    int pd=arr[1]-arr[0];
    int curr=2;
    int j=2;
    int ans=2;

    while (j<n)
    {
        if (pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;

    }

    cout<<"the length of the longest sub-array that can be created is : ";
    cout<<ans;
    
    
    
    return 0;
}