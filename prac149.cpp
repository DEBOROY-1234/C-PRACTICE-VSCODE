//RECURSION: remove all duplicates from a string
#include<iostream>
#include<string>
using namespace std;

void removeduplicates(string s){
    if (s.length()==0)
    {
        return ;
    }
    
    char ch=s[0];
    string ans=removeduplicates(s.substr(1));
    
    if (ch==ans[0])
    {
        return ans;
    }

    return (ch+ans);
    

}

int main(){
    string s;
    getline(cin,s);
    removeduplicates(s);
    return 0;
}