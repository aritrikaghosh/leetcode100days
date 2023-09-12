
/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]*/


/*O(N^2) solution*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            int a= nums[i];
            for(int j=i+1;j<n;j++){
                if(a+nums[j]==target){

                    arr.push_back(i);
                    arr.push_back(j);

                }
            }
        }

        return arr;
        
    }
};

