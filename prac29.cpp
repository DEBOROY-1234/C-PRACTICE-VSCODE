//reverse of a number

#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem;
    cout<<"enter the number you want to reverse"<<endl;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"the reverse of the number is "<<rev;
    return 0;
}