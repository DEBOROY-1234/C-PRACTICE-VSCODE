//break and continue
#include<iostream>

using namespace std;
int main(){
    int i,j;
    for(i=0;i<=50;i++){
        cout<<i<<endl;
        if(i==10){
            break;
        }
    }
    for(j=20;j<=30;j++){
        cout<<j<<endl;
        if(j==25){
            continue;                     //overlooks the if statement and goes on running
        }
    }
    return 0;
}