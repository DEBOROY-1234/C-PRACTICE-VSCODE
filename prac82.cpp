//count the no.of even terms and odd terms in an array 
#include<iostream>

using namespace std;

int main(){
    int n,e,c=0,k=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\n enter the "<<i+1<<" element of the array : ";
        cin>>arr[i];
        if (arr[i]%2==0)
        {
            c++;
        }
        else{
            k++;
        }
        
        
    }
    cout<<"---------------------------------------------------"<<endl;
    cout<<"\n the created array is "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"the no.of even terms is "<<c<<endl;
    cout<<"the no.of odd terms is "<<k<<endl;

    

    return 0;
}
