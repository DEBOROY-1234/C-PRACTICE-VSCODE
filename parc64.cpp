#include<iostream>
using namespace std;

int checkoddoreven(int *num){
    if (*num%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"---------check odd or even-----------------"<<endl;
    if (checkoddoreven(&n)==1)
    {
        cout<<n<<" is even"<<endl;

    }
    else{
        cout<<n<<" is odd"<<endl;

    }
    
    return 0;
}