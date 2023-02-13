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

    int currsum[n+1];
    currsum[0]=0;


    int maxsum=INT_MIN;
    for (int i = 1; i <n+1; i++)
    {
        int sum=0;
        for (int j = 0; j < i; j++)
        {
            sum=currsum[i]-currsum[j];
            maxsum=max(sum,maxsum);
        }
        
    }

    cout<<"longest sum  is "<<maxsum;


    

    return 0;
}