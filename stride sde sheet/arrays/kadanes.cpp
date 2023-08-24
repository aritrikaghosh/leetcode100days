/*Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxhere=0;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            maxhere=maxhere+nums[i];
            if(maxhere>max){
                max=maxhere;
            }
            if(maxhere<0){
                maxhere=0;
            }
        }

        return max;
        
    }
};
int main(){
    
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution ob;
    cout<<ob.maxSubArray(nums)<<endl;
    
    
    
    return 0;
}