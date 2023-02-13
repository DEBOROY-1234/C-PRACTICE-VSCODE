//create a array of distinct numbers and find a presence of a particular element in the array and its index
#include<iostream>
using namespace std;
int main(){
    int n,num;
    int arr[n];
    cout<<" enter the size of the array"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the element "<<i+1<<" of the array ";
        cin>>arr[i];
    }
    cout<<"the elements of the array are : ";
    for (int i = 0; i < n; i++)
    {
        
        cout<<arr[i]<<" ";
    }
    
    cout<<" \n enter the number you want to search in the array "<<endl;
    cin>>num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            cout<<"the number "<<num<<" is present in the array ";
            cout<<"index of the number is "<<i<<endl;
            break;
        }
        
    }
    return 0;
}
    