class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int next = nums.size()-1;
        
        // 从倒数第二个元素开始，看它能否到达最后一个元素，一次类推
        for(int i=next-1; i>=0; i--)
        {
            if(i+nums[i] >= next)
            {
                next = i;
            }
        }
        
        return next == 0;
    }
};