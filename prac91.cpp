//RECURSION: print all n natural numberss

#include<iostream>
using namespace std;

int printnatural(int num,int n);


int main(){
    int n=1,num;
    cout<<"enter the number till which you want to print all natural numbers "<<endl;
    cin>>num;
    printnatural(num,n);
    return 0;
}

int printnatural(int num,int n){
   
    if (n<=num)
    {
        cout<<n<<" ";
        printnatural(num,n+1);
    }
    return 0;
    
}