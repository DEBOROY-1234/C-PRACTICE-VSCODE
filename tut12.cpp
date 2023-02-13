#include<iostream>
using namespace std;

int main(){
    //what are pointers??  its holds the address of other datatypes

    int a=3;
    int*b=&a;
    cout<<"adress of a is "<<b<<endl;
    cout<<"address of a is "<<&a<<endl;

    //&----> address of operator
    //*----> deference operator 

    cout<<"the value of address at b is "<<*b<<endl;

    //now for the address of b
    //pointer to pointer
    
    int**c=&b;
    cout<<"the value stored at b is "<<c<<endl;
    cout<<"the value stored at b is "<<&b<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    return 0;
}