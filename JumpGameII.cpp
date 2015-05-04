class Solution {
public:
    int jump(vector<int>& nums) {
        
        int result = 0;
        int last = 0;   // 上一跳能到达的最远距离
        int curr = 0;   // 当前跳能到达的最远距离
        
        for(int i=0; i<nums.size(); i++)
        {
            if(i > curr)
            {
                return -1;
            }
            if(i > last)
            {
                last = curr;
                result++;
            }
            curr = max(curr, i+nums[i]);
        }
        
        return result;
    }
};