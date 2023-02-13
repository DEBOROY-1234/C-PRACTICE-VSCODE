//pattern 6
#include<iostream>
using namespace std;
int main(){
    int rows,space;
    cout<<"enter the no.of rows "<<endl;
    cin>>rows;
    space=rows+4-1;
    for(int i=1;i<=rows;i++){
        for(int k=space;k>=1;k--){
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        space--;                    //decreasing the size of space after each iteration
    }
    return 0;
}