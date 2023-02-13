
//create a matrix and show its elements
#include<iostream>

using namespace std;

int main(){

    int r,c;

    cout<<"enter the number of rows"<<endl;
    cin>>r;
    cout<<"enter the number of columns"<<endl;
    cin>>c;
    int a[r][c];
    
    cout<<"enter the values of the matrix \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"element at a"<<i+1<<"-"<<j+1<<" : ";     //to tell the user which space they are going to allocate the numbers
            cin>>a[i][j];
        }
        
    }
    cout<<"----------------------------------------------------"<<endl;
    cout<<"the given matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    
    
    return 0;
}