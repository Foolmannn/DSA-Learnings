// 50. Pow(x, n)
// Medium
// Topics
// premium lock icon
// Companies
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000

//Brute force will result very hight time complexity

// SO Binary exponentiation approach is used 

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(x==0) return 0.0;
        if(x==1) return 1.0;
        if(x==-1 && n%2 == 0 ) return 1.0; 
          if(x==-1 && n%2 != 0 ) return -1.0; 
        long binform =n;
        double ans=1;
        if(n<0){
            x=1/x;
            binform = -binform;
        }
        while(binform>0){
            if(binform%2 ==1){
                ans *=x;
            }
            x*=x;
            binform /=2;
        }
        return ans;
        
    }
};