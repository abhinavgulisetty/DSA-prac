// https://leetcode.com/problems/move-zeroes/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int left = 0;
            for(int right = 0;right< nums.size();right++){
                if(nums[right]!= 0){
                    swap(nums[left],nums[right]);
                    left++;
                }
            }
        }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    // Output: 1 3 12 0 0
    return 0;
}

// /* Move all zeroes to the end of the array
//     We use two pointers, one to keep track of the current position of the non-zero element and the other to iterate through the array
//     If the current element is not zero, we move it to the current position and increment the current position pointer
//     If the current element is zero, we do nothing
//     After iterating through the array, we fill the remaining positions with zeroes
//     We return the modified array
// */
// // Time complexity: O(n) where n is the size of the array
// // Space complexity: O(1) as we are using only a few variables to store the current position and count of zeroes

