/*Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25*/


/*THIS IS BRUTE FORCE METHOD*/

class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        if(n==0){
            return 1;
        }
        else if(n>0){
            for(int i=0;i<n;i++){
                result*=x;
            }

            return result;

        }
        else{
            for(int i=0;i<abs(n);i++){
                result/=x;
            }
            return result;
        }

        return 0;
        
    }
};