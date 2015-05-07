class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int result = INT_MIN;
        
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