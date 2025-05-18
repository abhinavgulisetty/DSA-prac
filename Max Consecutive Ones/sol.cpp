// https://leetcode.com/problems/max-consecutive-ones/description/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int count = 0;
            int ans = 0;
            int n = nums.size();
            for (int i=0;i< n;i++){ 
                if(nums[i] == 1) {
                    count++;
                    ans = max(count,ans);
                }
                else count = 0;
            }
            return ans;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int result = sol.findMaxConsecutiveOnes(nums);
    cout << "Max consecutive 1s: " << result << endl;  // Output: 3
    return 0;
}

/* Counting the number of 1's in the array
    If the number is 1, we increase the count and check if it is greater than the previous maximum count
    If it is, we update the maximum count
    If it is not, we reset the count to 0
    If the number is 0, we reset the count to 0
    We return the maximum count at the end
*/
// Time complexity: O(n) where n is the size of the array
// Space complexity: O(1) as we are using only a few variables to store the count and maximum count