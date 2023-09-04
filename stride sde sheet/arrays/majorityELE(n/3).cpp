
#include<bits/stdc++.h>
using namespace std;
/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]*/

/*O(N^2) APPROACH */

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          int n=nums.size();
        vector<int> majele;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){

                if(nums[i]==nums[j]){

                    count++;
                }

            }

            if(count>floor(n/3)){
                majele.push_back(nums[i]);
            }
        }

        sort(majele.begin(),majele.end());
        majele.erase(unique(majele.begin(),majele.end()),majele.end());


        return majele;
    }
};



/*o(n) approach*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count = nums.size()/3;
        unordered_map<int, int> map;
        vector<int> output;
        for(auto num : nums){
            map[num]++;
        }
        for(auto num : map){
            if(num.second > count){
                output.push_back(num.first);
            }
        }
        return output;
    }
};