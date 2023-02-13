//Recursion: sum of natural numbers 

#include<iostream>
using namespace std;

int sumofnatural(int n);
int main(){
    int n;
    cout<<"enter upto which term you want the sum of natural numbers"<<endl;
    cin>>n;
    cout<<"the sum of "<<n<<" natural numbers is "<<sumofnatural(n);
    return 0;
}

int sumofnatural(int n){
    int sum;
    if (n==1)
    {
        return (1);
    }
    else{
        sum= n + sumofnatural(n-1);
    }
    return (sum);
}