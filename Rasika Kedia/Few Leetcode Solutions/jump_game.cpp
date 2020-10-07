/*
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int lastindexreached=n-1;
        bool canreach=true;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]+i<lastindexreached)
            {
                 canreach = false;
            }
            else 
            {
                lastindexreached=i;
                canreach=true;
            }
        }
        return canreach;
    }
};
