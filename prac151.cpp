#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    int n,s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    for (auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<"\nenter the number of elements you want to add"<<endl;
    cin>>s;
    for (int i = 0; i < s; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    for (auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<"\nelement at index 0: "<<v.at(0)<<endl;
    cout<<"\nelement at index 3: "<<v[3];

    int e,value;
    cout<<"\n enter the index of the element you want to change : "<<endl;
    cin>>e;
    cout<<"\n enter the new value : "<<endl;
    cin>>value;
    v.at(e)=value;
    for (auto element:v)
    {
        cout<<element<<" ";
    }


    return 0;
}

