//factorial of number
#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;
    cout<<"enter the number whose factorial you want"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of the "<<n<<" is "<<fact;

    return 0;
}