class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        const int n = nums.size();
        
        if(n < 3)
        {
            return INT_MAX;
        }
        
        int result = nums[0] + nums[1] + nums[2];
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1, k=n-1; j<k;)
            {
                int sum = nums[i] + nums[j] + nums[k];
                
                if(abs(sum-target) < abs(result-target))
                {
                    result = sum;
                }
                
                if(result == target)
                {
                    return result;
                }
                if(sum < target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        
        return result;
    }
};