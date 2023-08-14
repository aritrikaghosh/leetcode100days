
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
    int n=salary.size();
    sort(salary.begin(),salary.end());
    double sum=0;
    for(int i=1;i<n-1;i++){
        sum+=salary[i];
    }
    sum=sum/(n-2);
          
    return sum;
}
};