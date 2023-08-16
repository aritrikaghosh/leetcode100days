#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int arr[n+1];
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n+1;i++){
            arr[i]=i;
            sum1+=arr[i];
        }
        for(int i=0;i<n;i++){
            sum2+=nums[i];
        }

        int missing=sum1-sum2;
        
    return missing;
        
    }
};
int main(){
    
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obs;
    cout<<obs.missingNumber(nums)<<endl;

    return 0;
}