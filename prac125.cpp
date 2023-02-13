//MAXIMUM SUM SUBARRAY of  a array
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

int maxsum=-122312313;   //extremely small value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            int sum=0;
            for (int k=i; k <=j; k++)
            {
                cout<<arr[k]<<" ";
                c++;
                sum=sum+arr[k];
            }
            cout<<endl;
            maxsum=max(sum,maxsum);
        }
        
    }
    cout<<"total number of sub array is : "<<c;
    cout<<"\n max sum is : "<<maxsum;
    
    return 0;
}