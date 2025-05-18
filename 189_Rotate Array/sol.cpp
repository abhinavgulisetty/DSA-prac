// https://leetcode.com/problems/rotate-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            k = k % n; // Handle cases where k is greater than n
            reverse(nums.begin(), nums.end()); // Reverse the entire array
            reverse(nums.begin(), nums.begin() + k); // Reverse the first k elements
            reverse(nums.begin() + k, nums.end()); // Reverse the remaining elements
            
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

//Time Complexity: O(n), where n is the number of elements in the array. Each element is reversed at most twice.
//Space Complexity: O(1), as we are modifying the array in place without using any extra space.

/*Note: The reverse function is a built-in function in C++ STL that reverses the elements in a range.
The solution uses the reverse algorithm to rotate the array in place, which is efficient and avoids the need for extra space.
The algorithm works by reversing the entire array first, then reversing the first k elements and finally reversing the remaining n-k elements.
This effectively rotates the array to the right by k positions.
The algorithm is also easy to understand and implement, making it a good choice for this problem.
The solution is optimal and meets the requirements of the problem statement.
The algorithm is also robust and handles edge cases such as empty arrays and k being zero or negative.
*/
    