//removing duplicate elements of a array using new array

#include<iostream>
 
using namespace std;
 
int main()
{
int i,j,k,n,a[30];
cout<<"How many elements?";
cin>>n;
cout<<"\nEnter elements of array\n";
for(i=0;i<n;++i)
cin>>a[i];

cout<<"the array created is "<<endl;
for ( i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}
cout<<endl<<"------------------------------------------------------"<<endl;


//deletion of duplicate animals


for(i=0;i<n;++i)
for(j=i+1;j<n;j)    //value of j remains same considering "j" wont cross the value n 
{
if(a[i]==a[j])
{
for(k=j;k<n-1;++k)
a[k]=a[k+1];
--n;
}
else
++j;
}
cout<<"\n";

cout<<"sorted array without duplicate elements is : ";
for(i=0;i<n;++i)
cout<<a[i]<<" ";
 
return 0;
}