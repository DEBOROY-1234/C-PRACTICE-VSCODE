//Write a program in C++ to find the last prime number occur before the entered number
#include<iostream>
using namespace std;
int main(){
    int i,j,c=0,n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(i=n-1;i>=1;i--){
        for ( j=2; j < i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
            
        }
        if (c==0)
        {
            if (i==1)
            {
                cout<<"there is no prime number less than 2"<<endl;
                break;
            }
            else{
                cout<<i<<" is the last prime number before "<<n;
                break;
            }
            
        }
        c=0;  //we have to make c=0 otherwise its previous value will be taken into consideration in next loop
        
    }
    return 0;
}
