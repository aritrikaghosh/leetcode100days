int Solution::findMedian(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    vector<int> arr;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            arr.push_back(A[i][j]);
        }
    }
    
    int size=arr.size();
    
    sort(arr.begin(),arr.end());
    int median1;
    int median2;
    
    if(size%2==0){
        median1=(size/2)+1;
        median2=size/2;
        
        
        return (arr[median1]+arr[median2])/2;
        
    }
    else{
        
        median1=(size+1)/2;
        return arr[median1-1];
    }
    
    return 0;
    
    
}


