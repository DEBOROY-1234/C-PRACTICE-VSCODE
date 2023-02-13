#include<iostream>
using namespace std;
int main(){
    int i;
    //array examples
    int marks[4]={40,35,28,99};
    int score[4];
    score[0]=1;
    score[1]=2;
    score[2]=3;
    score[3]=4;
    cout<<marks[0]<<endl;
    cout<<marks[3]<<endl;
    
    //second array output
    cout<<score[2]<<endl;

    for ( i = 0; i <=3; i++)
    {
        cout<<marks[i]<<endl;
    
    }
    
    return 0;
}