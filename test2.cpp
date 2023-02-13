#include <iostream>
using namespace std;
int main(){
	int testcase;
    cin>>testcase;
    for (int i = 0; i < testcase; i++)
    {
        int n;
        cin>>n;
        string s;
        int c=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                c=0;
            }
            else{
                c++;
            }
            
        }
            
        if (c>4)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}