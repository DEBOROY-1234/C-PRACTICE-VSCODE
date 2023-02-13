/*  black-white-black-white-black
    white-black-white-black-white
    black-white-black-white-black
    white-black-white-black-white
    black-white-black-white-black */

#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter the no.of rows"<<endl;
    cin>>rows;
    for (int i = 0; i <=rows; i++)
    {
        for (int j = 0; j <rows; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<" black ";
            }
            else{
                cout<<" white ";
            }
            
        }
        cout<<endl;
        
    }
    
    return 0;
}