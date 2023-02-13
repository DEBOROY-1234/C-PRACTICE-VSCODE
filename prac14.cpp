//Write  program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b,gcd;
    cout<<"enter two number whose gcd you want"<<endl;
    cin>>a>>b;
    for (int i = 1; i <= a && i <= b; i++) 
    {
        if ((a % i == 0) && (b % i == 0)) 
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    
    return 0;
}