//STRING : form a maximum number from a number set using STRING.

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    
    string s;
    cout<<"enter a number "<<endl;
    cin>>s;
    

    //using  a 'sort string ' function
    sort(s.begin(),s.end(),greater<int>());
    cout<<"maximum number formed is : "<<s;

    return 0;
    
}