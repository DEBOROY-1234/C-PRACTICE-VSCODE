
//merging of two arrays

#include<iostream>
using namespace std;

int arrmerge(int arrA[],int asize,int brrB[],int bsize);
int main(){
    int a,b;
    cout<<"enter the size of the 1st  array "<<endl;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout<<"enter the "<<i+1<<" element of the array"<<endl;
        cin>>arr[i];
    }

    cout<<"--------------------------------------"<<endl;

    cout<<"enter the size of the second array"<<endl;
    cin>>b;
    int brr[b];
    for (int i = 0; i < b; i++)
    {
        cout<<"enter the "<<i+1<<" element of the array"<<endl;
        cin>>brr[i];
    }

    cout<<" ---------------------------------------"<<endl;

    cout<<"the 1st array is "<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl;

    cout<<"the 2nd array is "<<endl;
    for (int j = 0; j < b; j++)
    {
        cout<<brr[j]<<" ";
    }
    cout<<endl<<endl;

    cout<<endl<<"now merging of the two arrays"<<endl;
    
    arrmerge(arr,a,brr,b);
    
    
    
    
    return 0;
}

int arrmerge(int arrA[],int asize,int brrB[],int bsize){
    
    int i,j=0,k=0,v=0;
    int max=asize+bsize;
    int r_arr[max];
    
    while (v<max)
    {
        if (j<asize)
        {
            r_arr[v]=arrA[j];
            j++;
            v++;
        }
        if (k<bsize)
        {
            r_arr[v]=brrB[k];
            k++;
            v++;
        }
        
        
    }
    
    cout<<endl<<"elements of the merged array R :"<<endl;
    for (int i = 0; i < max; i++)
    {
        cout<<r_arr[i]<<" ";
    }
    
    
    
    return 0;
}