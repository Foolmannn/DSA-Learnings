// 3. Longest Substring Without Repeating Characters
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given a string s, find the length of the longest substring without duplicate characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st; // stores unique characters in current window
        
        int left = 0;           // left pointer of window
        int maxLen = 0;         // stores maximum length found

        // right pointer expands the window
        for (int right = 0; right < s.length(); right++) {

            // If duplicate character is found,
            // shrink window from left until duplicate is removed
            while (st.count(s[right])) {
                st.erase(s[left]); // remove left character
                left++;            // move left pointer forward
            }

            // Insert current character into set
            st.insert(s[right]);

            // Update maximum length of substring
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};