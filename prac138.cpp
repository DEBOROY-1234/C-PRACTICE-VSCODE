//RECURSION: sum of n natural numbers

#include<iostream>
using namespace std;


int sumofn(int num){
    
    if (num==0)
    {
        return 0;
    }
    
    return num+sumofn(num-1);
    
}

int main(){
    int n;
    cout<<"enter the number you want sum of natural numbers"<<endl;
    cin>>n;
    cout<<sumofn(n);
    return 0;
}