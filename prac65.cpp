//decimanl to binary conversion

#include<iostream>
using namespace std;

int bin_to_dec(int num){
        int bno=0,rem,f=1;
        while (num!=0)
        {
            
            rem=num%2;
            bno=bno + rem*f;
            f=f*10;
            num=num/2;
        }
        return bno;
        
}

int main(){
    int n,b;
    cout<<"enter the number whose binary you want"<<endl;
    cin>>n;
    b=bin_to_dec(n);
    cout<<" the binary number value is "<<b<<endl;
    return 0;
}