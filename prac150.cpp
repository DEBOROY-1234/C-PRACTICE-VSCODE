#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v={1,2,3,4,5};
    vector<int> v2(5,12);
    vector<int> v3{3,5,7,9,3,20};

    for ( int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"---------------------------------v2---------------------------"<<endl;
    for (auto element:v2)
    {
        cout<<element<<endl;
    }

    cout<<"---------------------v3-------------------------------"<<endl;
    vector<int>::iterator it;
    for (it = v3.begin(); it != v3.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}

