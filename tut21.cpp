#include<iostream>
using namespace std;

class employee{

    private:
        int a ,b, c;
    public:
        int d, e;
        void setdata(int a1,int b1,int c1); //Declaration of a function which we will create later in program
        void getdata(){
            cout<<"the value of a is"<<a<<"\n";
            cout<<"the value of b is"<<b<<"\n";
            cout<<"the value of c is"<<c<<"\n";
            cout<<"the value of d is"<<d<<"\n";
            cout<<"the value of e is"<<e<<"\n";
        }
        
};

void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){

    employee debo;
    debo.d=36;
    debo.e=56;
    debo.setdata(1,2,3);
    debo.getdata();
    return 0;
}