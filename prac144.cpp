//RECURSION : print n natural numbers in increasing order
#include<iostream>
using namespace std;

void inc(int num){
    
    if (num==1)
    {
        cout<<"1"<<endl;
    }
    
    inc(num-1);
    cout<<num<<endl;
}


int main(){
    int n;
    cin>>n;
    inc(n);
    return 0;
}