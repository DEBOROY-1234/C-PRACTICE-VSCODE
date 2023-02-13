//sum of two matrix 

#include<iostream>
using namespace std;
int main(){
    int r,c;
    
    cout<<"enter the no.of rows "<<endl;
    cin>>r;
    cout<<"enter the no.of columns "<<endl;
    cin>>c;
    int a[r][c];            /*declaring all the array first */
    int b[r][c];
    int sum[r][c];

    cout<<"---------for the 1st matrix------"<<endl;
    cout<<"enter the elements for the first matrix "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"element a"<<i+1<<"-"<<j+1<<" : ";
            cin>>a[i][j];
        }
        
    }
    cout<<"  ----------------for the 2nd matrix -------------"<<endl;
    cout<<"enter the elements for the second matrix "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"element b"<<i+1<<"-"<<j+1<<" : ";
            cin>>b[i][j];
        }
        
    }

    cout<<"----------------------------------------------------"<<endl;
    cout<<"the 1st matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"----------------------------------------------------"<<endl;
    cout<<"the 2nd matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<" "<<b[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
        
    }
    
    cout<<"sum of the two matrix is : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<" "<<sum[i][j];
        }
        cout<<endl;
    }

    
    return 0;
}