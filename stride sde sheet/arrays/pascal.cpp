/*Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> arr;
        for(int i=0;i<numRows;i++){
            arr.push_back(vector<int>(i+1));
            arr[i][i]=1;
            arr[i][0]=1;
            for(int j=1;j<i;j++){
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
        return arr;


        }
};
