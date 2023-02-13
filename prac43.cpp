#include<iostream>
using namespace std;
int main(){
    int n,c=1;
    cout<<"enter the no.of rows"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        for (int k = 1; k >=n-1; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j <=i; j++)
        {
            if (j==0||i==0)
            {
                cout<<c<<" ";
            }
            else{
                c=c*(i-j+1)/j;
                cout<<c<<" ";
            }
            
        }
        cout<<endl;
        
        
    }
    return 0;
}