#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthFactor(int n, int k) {
        
        vector<int> arr;
        for(int i=1;i<=n;i++){
            int ele;
            if(n%i==0){
                ele=i;
                arr.push_back(ele);
            }
           
        }
        if(arr.size()<k){
            return -1;
        }
        else{
          return arr[k-1];
          }
    }
  
};