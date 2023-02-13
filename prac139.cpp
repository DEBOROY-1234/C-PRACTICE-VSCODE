//RECURSION: raised to power

#include<iostream>
using namespace std;

int pow(int n,int p){
    
    if (p==0)
    {
        return 1;
    }
    
    return n*pow(n,p-1);
    
}

int main(){
    int n;
    int p;
    cout<<"number : "<<endl;
    cin>>n;
    cout<<"power : "<<endl;
    cin>>p;

    cout<<pow(n,p);
    return 0;
}