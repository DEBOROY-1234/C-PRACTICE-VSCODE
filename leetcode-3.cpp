#include <bits/stdc++.h>
using namespace std;

 int mostFrequentEven(vector<int> nums) {
            map<int,int>counts;
            
            for(int i:nums){
                if(i%2==0)
                   counts[i]++;    
            }
            
            int ans=-1 ,freq=INT_MIN; 
            
            for(auto i: counts){
                //cout<<i.first <<" "<<i.second<<endl;
                    if(i.second>freq){
                            ans=i.first, freq=i.second;
                    }
            }
            return ans;
    }

    int main(){

        int n;
        cin>>n;

        vector<int> num;

        for(int i=0;i<n;i++){
            int c = 0;
            cin>>c;
            num.push_back(c);

        }

        cout<<mostFrequentEven(num)<<"\n";
    }