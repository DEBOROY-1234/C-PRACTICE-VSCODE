#include<iostream>
using namespace std;
int main(){
    int rows,space;
    cout<<"enter the no.of rows"<<endl;
    cin>>rows;
    space=rows+4-1;
    for(int i=1;i<=rows;i++){
        for (int k = space; k >=1; k--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*"<<" ";      //add the space to get the perfect structure of the pyramid
        }
        cout<<endl;
        space--;
        
        
    }
    return 0;
}