//squaring of the matrix

#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"enter the no.of rows "<<endl;
    cin>>r;
    cout<<"enter the no.of columns "<<endl;
    cin>>c;
    int a[r][c],s[r][c];
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

    //squaring of the matrix 

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            s[i][j]=0;
            for (int k = 0; k <c; k++)
            {
                s[i][j]+=a[i][k]*a[k][j];
            }
            
            
        }
        
    }
    cout<<"----------------------------------------------------"<<endl;
    cout<<"the matrix after squaring"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<" "<<s[i][j];
        }
        cout<<"\n";
        
    }
    
    
    
    return 0;
}