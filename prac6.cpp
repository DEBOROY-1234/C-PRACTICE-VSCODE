//area of a triangle 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,s,area;
    cout<<"enter the length of the sides of the triangle"<<endl;
    cin>>a>>b>>c;
    
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<"area of the triangle is "<<area;
    return 0;
}