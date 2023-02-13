//CHAR ARRAY : largest word in a sentance     //WRONG
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of sentence : "<<endl;
    cin>>n;
    
    char arr[n];
    cout<<"enter the string "<<endl;
    cin.getline(arr,n);                             //using getline functions
    cin.ignore();                                   //to clear the buffer space

    int i=0,currlen=0,maxlen;
    int st=0,maxst=0;

    while(1){


        if (arr[i]==' ' || arr[i]=='\0')
        {
            if (currlen>maxlen)
            {
                maxlen=currlen;
                maxst=st;
            }
            currlen=0;
            st=i+1;
        }
        

        else
        currlen++;
        if (arr[i]=='\0')
        {
            break;
        }

        i++;
        
    }

    cout<<"the length of the biggest word in the sentence is "<<maxlen;
    for (int i = 0; i < maxlen; i++)
    {
        cout<<arr[i+maxst];
    }
    
    return 0;
}