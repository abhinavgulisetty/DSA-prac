// https://leetcode.com/problems/rotate-array/

#include <bits/stdc++.h>
using namespace std;
// using extra space in this solution
// Time Complexity: O(n), where n is the number of elements in the array. We are using an extra array to store the rotated elements.
// Space Complexity: O(n), as we are using an extra array to store the rotated elements.
class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            vector<int> temp(n);
            for(int i=0;i<n;i++){
                temp[i] = nums[(i+k)%n];
            }
            for(int i=0;i<n;i++){
                nums[i] = temp[i];
            }
        }
    };

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Solution sol;
    sol.rotate(nums, k);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}