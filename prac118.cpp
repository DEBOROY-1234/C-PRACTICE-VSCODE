//STRING : find the longest word in the sentence

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);
    int len= str.size();
    int si=0,ei=0,maxlen=0,minlen=0;
    int maxsi=0,minsi=0;
    while(ei<=si){
        if (ei<len && str[ei]!='\0')
        {
            ei++;
        }
        else{
            int curren=ei-si;

            if (curren>maxlen)
            {
                maxlen=curren;
                maxsi=si;
            }
            else if (curren<minlen)
            {
                minlen=curren;
                minsi=si;
                
            }

            ei++;
            si=ei;
            
            
        }

        
    }
    string minword=str.substr(minsi,minlen);
    string maxword=str.substr(maxsi,maxlen);

    cout<<"longest word = "<<maxword;
    cout<<"smallest word = "<<minword;

    
    
    return 0;
}
    
