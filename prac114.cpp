#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr=&a;              //pointing the value at a certain address
                    //assigning the address of the variable to the pointer

    cout<<a<<" "<<*aptr;            // *aptr <--- deferencing the pointer
    
    //updating the value of a just by using pointer
    *aptr=20;
    cout<<"\n  updated value of a is : \n "<<a;
    
    return 0;


}