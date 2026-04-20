// Majority element problem
/*
169. Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

// Brute Force approach O[n^2]

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s=nums.size();
        int n=s/2;
        // int ans;
        for(int i=0;i<s;i++){
            int max=0;
           for(int j=0;j<s;j++){
                if(nums[i]==nums[j]){
                    max++;
                }
            }
            if(max>n){
                return nums[i];
            }
        }
       return 0; 
    }
};

// another optimized approach is to sort them and them calculate the frequency  O[nlogn]
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        // sort
        sort(nums.begin(),nums.end());
        //freq count 
        int freq=1,ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                freq++;
            }
            else{
                freq=1;
                ans=nums[i];
            }
            if(freq>n/2){
                return ans;
            }
        }
       return ans; 
    }
};


// Moore optimized solution is to use the moore's voting algorithm  O[n] 
  

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int freq=0,ans=0;
       for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];

        }
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }

       }
       return ans; 
    }
};