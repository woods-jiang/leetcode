class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int result = INT_MIN;
        
        // 状态方程 sum[i] = max(sum[i-1]+nums[i], nums[i]) 0<=i<n
        // result = max(sum[i]) 0<=i<n
        
        for(int i=0; i<nums.size(); i++)
        {
            sum = max(sum+nums[i], nums[i]);
            
            if(sum > result)
            {
                result = sum;
            }
        }
        
        return result;
    }
};