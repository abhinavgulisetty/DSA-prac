#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/majority-element/description/
// Boyer-Moore Majority Vote Algorithm
class Solution {    
    public:
        int majorityElement(vector<int>& nums) {
            int ans = 0;
            int count = 0;
            for(int n: nums){
                if(count == 0){
                    ans = n;
                }
                count += n == ans ? 1 : -1;
            }
            return ans;
        }
};

// Time Complexity: O(n) where n is the size of the array
// Space Complexity: O(1) as we are using only a few variables to store the current position and count of zeroes

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3};
    cout << sol.majorityElement(nums) << endl; // Output: 3
    nums = {2, 2, 1, 1, 1, 2, 2};
    cout << sol.majorityElement(nums) << endl; // Output: 2
    return 0;
}