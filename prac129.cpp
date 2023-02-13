//ARRAY: form the biggest number from a numeric string 


#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    
    int n;
    cout<<"size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\n enter elements of the array : "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n creation of array done \n";

    sort(arr,arr+n);
    cout<<"maximum number that can be created would be : "<<endl;
    for (int i = n-1; i>=0; i--)
    {
        cout<<arr[i];
    }
    
    

    return 0;
    
}