#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int i,t,j,n;
    cout<<"enter the five elements of the array"<<endl;

    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"unsorted order of the array :"<<endl;
    for ( i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for ((int i = 0; i < 5; i++)&&(int j=0;j<5;j++))
    {
        if (arr[i]==arr[j])
        {
            cout<<"the number repeated is "<<endl;
        }
        
            
        
        
    }
    
    
    
    
    return 0;
}
