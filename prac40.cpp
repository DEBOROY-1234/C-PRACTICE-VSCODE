//write a c++ progarm to print pascals triangle
#include<iostream>
using namespace std;
int main(){
    int rows,p,q;
    cout<<"enter the no.of rows"<<endl;
    cin>>rows;
    for(int i=0;i<=rows;i++){
        if(i%2==0){
            p=1;
            q=0;
        }
        else{
            p=0;
            q=1;
        }
        for (int j = 0; j <=i; j++)
        {
            if (j%2==0)
            {
                cout<<p;
            }
            else{
                cout<<q;
            }
            
        }
        cout<<endl;
        
        
    }
    return 0;
}