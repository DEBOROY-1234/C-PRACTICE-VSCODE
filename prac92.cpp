//RECURSION: fibonacci series

#include<iostream>
using namespace std;

int fibonacci(int num);
int main(){
    int n;
    cout<<"enter the no.of terms of the fibonacci series"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    

    return 0;
}

int fibonacci(int num){

    if (num==0)
    {
        return 0;
    }
    else if (num==1)
    {
        return 1;
    }
    else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
    
    
}