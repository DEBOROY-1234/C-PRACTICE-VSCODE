//Display the sum of the series 1+x+x^2/2!+x^3/3!+....
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter the number of terms"<<endl;
    cin>>n;
    cout<<"enter the value of x "<<endl;
    cin>>x;
    float sum=1,row=1;
    for(int i=1;i<n;i++){
        row=row*x/(float)i;
        sum=sum+row;
    }
    cout<<"sum of the series is "<<sum;
    return 0;
}