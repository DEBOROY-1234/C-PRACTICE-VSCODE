//  RECURSION: decimal to binary

#include<iostream>
using namespace std;

int dectobin(int n);
int main(){
    int num;
    cout<<"enter the number you want to convert from decimal to binary "<<endl;
    cin>>num;
    cout<<num<<" in binaary is "<<dectobin(num);
    return 0;
}

int dectobin(int n){
    int static factor=1,rem,bin;    //use of static to keep the values constant
    if (n!=0)
    {
        rem=n%2;
        bin=bin+rem*factor;
        factor=factor*10;
        dectobin(n/2);
    }
    return bin;
}