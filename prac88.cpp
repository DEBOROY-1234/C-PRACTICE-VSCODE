//determinant of a 3x3 matrix
#include<iostream>
using namespace std;
#define M00 a[0][0]
#define M01 a[0][1]
#define M02 a[0][2]
#define M10 a[1][0]
#define M11 a[1][1]
#define M12 a[1][2]
#define M20 a[2][0]
#define M21 a[2][1]
#define M22 a[2][2]
int main(){
    int determinant;
    int a[3][3];
    cout<<"to checkout the determinant of a 3x3 matrix "<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"enter the elements of the matrix "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"enter the "<<i+1<<"-"<<j+1<<" element : ";
            cin>>a[i][j];
        }
        cout<<"\n";
        
    }
    cout<<"the matrix is :\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
        
    }

    determinant=M00*(M11*M22-M21*M12)-M01*(M10*M22-M20*M12)+M02*(M10*M21-M20*M11);
    cout<<"determimant of the matrix is : "<<determinant;
}