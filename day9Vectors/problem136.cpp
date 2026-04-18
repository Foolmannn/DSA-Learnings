#include <iostream>
#include <vector>
using namespace std;


// Problem 136: Single Number 
/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space */

int singleNumber(vector<int>& nums) // here the & means the pass by references . By default passed by value. So a alias is created of the vector nums so that it will be used 
{
        int ans;
        for(int i=0;i<nums.size(); i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count==1){
                cout<<nums[i];
                ans= nums[i];
            }
        }
        return ans;
} 
// above method donot have the linear runtime complexity
// So we use the bitwise operator to optimize the problem 
/*
we use the xor as when same num are xor ed then the result will be 0 

so we xor of the whole vector then only single number remains
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans ^= nums[i];
        }
        return ans;
    }
};


int main()
{


 





    return 0;
}