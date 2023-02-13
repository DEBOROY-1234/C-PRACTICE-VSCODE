//RECUSRION : no.of digits
#include<iostream>
using namespace std;

int numofdigits(int num);
int main(){
    int n;
    cout<<"enter the number whose no.of digits you want"<<endl;
    cin>>n;
    cout<<"number of the digits is "<<numofdigits(n)<<endl;

    return 0;
}

int numofdigits(int num){
    
    int static c=0;

    if(num!=0){
        c=c+1;
        numofdigits(num/10);
    }
    return c;
}