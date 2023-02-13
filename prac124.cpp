//printing all possible SUBARRAYS and their count

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int c=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"the created array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" \n";
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            for (int k=i; k <=j; k++)
            {
                cout<<arr[k]<<" ";
                c++;
            }
            cout<<endl;
            
        }
        
    }
    cout<<"total number of sub array is : "<<c;
    
    
    return 0;
}