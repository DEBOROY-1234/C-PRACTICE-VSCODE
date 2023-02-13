//vectors
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"----------------------------------------------------------------------";
    //vectors
    vector<int>::iterator it;
    for (it= v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<endl;
    }
    cout<<"-------------------------------------------------------------------";
    //auto
    for (auto element:v)
    {
        cout<<element<<endl;
    }
    cout<<"------------------------------------------------------------------------";
    v.pop_back();//1 2          deleting the last element 

    vector<int> v2 (3,50);
    //50 50 50
    cout<<"---------------------------------------------------------------------";
    swap(v,v2);
    for (auto element:v)
    {
        cout<<element<<endl;
    }
    for (auto element:v2)
    {
        cout<<element<<endl;
    }

    sort(v.begin(),v.end());
    for (auto element:v)
    {
        cout<<element<<endl;
    }
    
    
    return 0;
}