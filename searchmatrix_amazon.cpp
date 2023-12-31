#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int row=0;
	    int col=M-1;
	    while(row<mat.size() && col>=0){
	        if(mat[row][col]==X){
	            return 1;
	        }
	        else if(mat[row][col]<X){
	            row++;
	        }
	        else{
	            col--;
	        }
	    }
	     return 0;
	    
	}
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    Solution ob;
    cout<<ob.matSearch(arr,n,m,x)<<endl;

    return 0;
}