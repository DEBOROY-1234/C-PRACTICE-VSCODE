//maximum of 3 numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three distinct numbers"<<endl;
    cin>>a>>b>>c;

    if ((a>b)&&(a>c))
    {
        if (b>c)
        {
            cout<<a<<" is largest and  "<<c<<" is smallest "<<endl;
        }
        else
        {
            cout<<a<<" is largest and  "<<b<<" is smallest "<<endl;
        }
        
    }

    else if ((b>a)&&(b>c))
    {
        if (a>c)
        {
            cout<<b<<" is largest and  "<<c<<" is smallest "<<endl;
        }
        else
        {
            cout<<b<<" is largest and  "<<a<<" is smallest "<<endl;
        }
        
    }

    else
    {
        if (a>b)
        {
            cout<<c<<" is largest and  "<<b<<" is smallest "<<endl;
        }
        else
        {
            cout<<c<<" is largest and  "<<a<<" is smallest "<<endl;
        }
        
    }
    
    return 0;
}