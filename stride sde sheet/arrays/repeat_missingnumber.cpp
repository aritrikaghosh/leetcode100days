
#include<bits/stdc++.h>
using namespace std;
class solution{
public:
vector<int>repeatedNumber(vector<int> &A) {
    int n=A.size();
    vector<int> sol;
    
    sort(A.begin(),A.end());
    for(int i=0;i<n-1;i++){
        if(A[i]==A[i+1]){
            
            sol.push_back(A[i]);
            
        }
    }

    
    
    for(int i=0;i<n-1;i++){
        if(A[i+1]!=A[i]+1){
            sol.push_back(A[i]+1);
            
        }
        
    }

     sol.erase(unique(sol.begin(),sol.end()),sol.end());

    for(int i=0;i<sol.size();i++){
        
        cout<<sol[i]<<endl;
    }
    return sol;
    
    
}
        
};

int main(){

    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    solution obs;
    obs.repeatedNumber(nums);
    return 0;
}

