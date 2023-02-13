//Find the sum of the series 1 + 1/2^2 + 1/3^3 + …..+ 1/n^n
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    float sum=0,p;              //declaring pattern as float
    cout<<"enter the number of terms whose result you want"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        p=1/pow(i,i);
        sum+=p;
    }
    cout<<"the sum of the series is "<<sum<<endl;
    return 0;
}