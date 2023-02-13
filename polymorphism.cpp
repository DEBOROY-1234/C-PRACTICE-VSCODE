#include"bits/stdc++.h"
using namespace std;

class complex{

    private:
    int real,imag;
    public:
        complex(int r=0;int i=0){
            real=r;
            imag=i;
        }

        complex operator + (complex const &obj){
            complex res;
            res.image = imag + obj.imag;
            res.real = real + obj.real;
            return res;
        }

        void display(){
            cout<<real <<"+ i"<<imag<<endl;
        }
}

int main(){
    complex c1(12,7);
    complex c2(4,5);
    complex c3 = c1+c2;     //overloading
    c3.display();
    return 0;
}