 /*Write a program in C++ to input any number and print it in words.*/
 #include<iostream>
 using namespace std;
 int main(){
    int n,num=0;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"the number in words is : ";
    while(n!=0){
        num=(num*10)+(n%10);
        n=n/10;
    }
    for(int i=num;i>0;i=i/10){
        switch (i%10)
        {
        case 1:
            cout<<" one ";
            break;
        case 2:
            cout<<" two ";
            break;
        case 3:
            cout<<" three ";
            break;
        case 4:
            cout<<" four ";
            break;
        case 5:
            cout<<" five ";
            break;
        case 6:
            cout<<" six ";
            break;
        case 7:
            cout<<" seven ";
            break;
        case 8:
            cout<<" eight ";
            break;
        case 9:
            cout<<" nine ";
            break;
        case 0:
            cout<<" zero ";
            break;
        default:
            break;
        }

    }
    cout<<endl;
    return 0;
 }