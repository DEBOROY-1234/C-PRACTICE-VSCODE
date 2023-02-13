#include<iostream>
using namespace std;

int checkperfect(int num){
    int sum=0,rem;
    while (num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;

    }
    return (num==sum);
    
    
}

int checkarmstrong(int n1) 
{
    int rem, sum,num;
    sum = 0;
    num=n1;         //taking a alternate value so that the return statements gives 1 as an output 
    while(num!=0)  
    {  
        rem = num % 10;  // find the last digit of the number 
        sum += rem * rem * rem;  //calculate the cube of the last digit and adds to sum
        num = num/10;  
    }
    return (n1 == sum);
}


int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if (checkperfect(n))
    {
        cout<<"the number is a perfect square number"<<endl;
    }
    else{
        cout<<"not a perfect square number"<<endl;
    }
    
    if (checkarmstrong(n))
    {
        cout<<"is a armstrong number"<<endl;
    }
    else{
        cout<<"not a armstrong number"<<endl;
    }
    
    return 0;
}