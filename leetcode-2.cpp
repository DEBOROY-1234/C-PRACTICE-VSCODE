#include <bits/stdc++.h>
using namespace std;

int countOdds(int low, int high) {
        int odd=(high-low)/2;
        if(low%2==1 || high%2==1){
            odd++;
        }
        return odd;
}

 int main(){
        int low,high;
        cin>>low>>high;
        cout<<countOdds(low,high)<<"\n";

    }
