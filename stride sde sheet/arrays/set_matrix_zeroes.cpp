/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m = matrix[0].size();
       set<int> rowsofzero;
       set<int> colsofzero;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(matrix[i][j]==0){
                   rowsofzero.insert(i);
                   colsofzero.insert(j);
               }
           }
       }

       for(auto i:rowsofzero){
           for(int j=0;j<m;j++){
               matrix[i][j]=0;
           }
       }
       for(auto j:colsofzero){
           for(int i=0;i<n;i++){
               matrix[i][j]=0;
           }
       }

        
    }
};
int main(){
    
    int n;
    cin>>n;
    vector<int> matrix(n);
    for(int i=0;i<n;i++){
        cin>>matrix[i];
    }
    Solution ob;
    cout<<ob.setZeroes(matrix)<<endl;
    
    
    
    return 0;
}