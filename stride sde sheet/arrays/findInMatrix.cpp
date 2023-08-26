/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }

        return false;
        
    }
};


/*OPTIMIZED SOLUTION O(N)*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> arr;
      
        for(int i=0;i<row;i++){
            
             int first=matrix[i][0];
             int last=matrix[i][col-1];
             if(target>=first && target<=last){
                 arr=matrix[i];
             
            }
        }
        int n=arr.size();

        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return true;
            }
        }

       return false;
        
    }
};