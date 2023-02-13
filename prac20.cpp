//Write a program in C++ to display the multiplication table vertically from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the range of number whose multiplication table you want"<<endl;
    cin>>n>>m;
    for(int i=0;i<=10;i++){
        for (int j = n; j <= m; j++)
        {
            if (j <= m -1)
                cout << j << "x" << i << "= " << i * j<<"  ";
            else
                cout << j << "x" << i << "= " << i * j<<"   ";
        }
        cout<<endl;
        
    }
    return 0;
}