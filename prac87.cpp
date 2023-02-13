//transpose of a matrix and checking if symmetric or not

#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter the no.of rows "<<endl;
    cin>>r;
    cout<<"enter the no.of columns "<<endl;
    cin>>c;
    int a[r][c],t[r][c];
    cout<<"enter the elements of the matrix "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<"enter the "<<i+1<<"-"<<j+1<<" element : ";
            cin>>a[i][j];
        }
        cout<<"\n";
        
    }
    cout<<"the matrix is :\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
        
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            t[i][j]=a[j][i];
        }
        
    }
    cout<<"---------------------------------------------"<<endl;
    cout<<"the transpose of the matrix is"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<"\n";
        
    }

    int flag=1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]!=t[i][j])   //checking for the false condition
            {
                flag=0;
            }
            
        }
        
    }
    if (flag=1)
    {
        cout<<"matrix is symmetric";
    }
    else{
        cout<<"matrix is non symmetric";
    }
    
    
    
    return 0;
}