#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int total=0;
        int low=INT_MAX;
        int op=0;
        for(int i=0;i<n;i++){
            if(prices[i]<low){
                low=prices[i];
            }

            total=prices[i]-low;
            if(op<total){
                op=total;
            }
        }  
        return op;
    }
};
int main(){
    
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    Solution ob;
    cout<<ob.maxProfit(prices)<<endl;
    
    
    
    return 0;
}