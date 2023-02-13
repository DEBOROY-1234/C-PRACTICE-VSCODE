#include<iostream>

using namespace std;

int recursion(int x){

    if(x==0){
        return 1;
    }

    int small = recursion(x-1);
    int big = x * small;

    return big;
}

int main(){

    int a;
    cout<<"enter the number whose factorial you want : ";
    cin>>a;

    int r = recursion(a); 
    
    cout<<r<<endl;
}