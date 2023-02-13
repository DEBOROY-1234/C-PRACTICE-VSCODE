#include<iostream>
using namespace std;
int modularexponentiation(int x,int n,int m){

    int res=1;
    while(n>0){
        if (n&1)
        {
            //odd
            res=(1LL*(res)%m*(x)%m)%m;
        }
        
        (x)%m=((x)%m*(x)%m)%m;
        n>>1;
    }
    return res;
}