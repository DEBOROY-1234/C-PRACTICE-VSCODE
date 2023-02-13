#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>>ans;

void permuta(vector<int>&a,int idx){

    if (idx==a.size)
    {
        ans.push_back(a);
        return ;
    }
    for (idx=idxa;i=<a.size(); i++)
    {
        swap(a[i],a[idx]);
        permuta(a,idx+1);
        swap(a[i],a[idx]);
    }
    
    
}
int main(){
    vector<int> a;
    for (auto &i:a)
    {
        cin>>i;
    }
    permuta(a,0);
    for (auto v:ans)
    {
        for (auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        
        
    }
    
    
    return 0;
}