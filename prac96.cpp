//RECURSION: GCD of two numbers

#include<iostream>
using namespace std;


int gcd(int num1,int num2);

int main(){
    int a,b;
    cout<<"enter the two numbers whose GCD you want "<<endl;
    cin>>a>>b;

    cout<<"the GCD of the two numbers is "<<gcd(a,b);
    return 0;
}
int gcd(int num1,int num2){

    while(num1!=num2)   //considering that both the numbers are not equal ,if euqal then gcd=num
    {
      if (num1>num2)
        {
            return gcd(num1-num2,num2);
        }
        else{
            return gcd(num1,num2-num1);
        }
        
    }
    

    return num1;


}