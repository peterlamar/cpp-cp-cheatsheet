/*
Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int rtn=0;
        
        for (int i=0; i<nums.size(); i++){
            if (rtn < i)
                return false;
            rtn = max(rtn, i+nums[i]);
        }
        return true;
    }
};