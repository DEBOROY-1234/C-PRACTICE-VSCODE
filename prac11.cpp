//prime number within a range
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,a,i,f,c=0,t,fnd;
    cout<<"enter the initial and final for the range "<<endl;
    cin>>i>>f;
    for (a=i; a<=f; a++)
    {
        for (t=1; t<=a; t++)
        {
            if (a%t==0)
            {
                c=c+1;
            }
            
        }
                    
        if (c==1)
        {
            cout<<a<<" is a prime number"<<endl;
        }
        c=0;
        
    }
    
    
    return 0;
}