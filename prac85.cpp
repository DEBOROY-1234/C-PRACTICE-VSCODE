#include <iostream>  
using namespace std;  
int main()  
{  
    int r,c,i,j,k;    
    cout<<"enter the number of row=";    
    cin>>r;    
    cout<<"enter the number of column=";    
    cin>>c;    
    cout<<"enter the first matrix element=\n";  
    int a[r][c],b[r][c],mul[r][c];
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            cin>>a[i][j];  
        }    
    }    
    cout<<"enter the second matrix element=\n";    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
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


    cout<<"multiply of the matrix=\n";    

    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<c;k++)        
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    
    //for printing result    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            cout<<mul[i][j]<<" ";    
        }    
        cout<<"\n";    
    }    
return 0;  
}    
    
    
    
