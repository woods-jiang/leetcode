class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        
        const int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-2; i++)
        {
            // 与前面的数是相等的，则跳过这个数
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            
            for(int j=i+1, k=n-1; j<k;)
            {
                // 与前面的数是相等的，则跳过这个数
                if(j > i+1 && nums[j] == nums[j-1])
                {
                    j++;
                    continue;
                }
                
                if(k < n-1 && nums[k] == nums[k+1])
                {
                    k--;
                    continue;
                }
                
                int sum = nums[i] + nums[j] + nums[k];
                
                if(0 == sum)
                {
                    vector<int> answer({nums[i], nums[j],nums[k]});
                    result.push_back(answer);
                    j++;
                    k--;
                }
                else if(sum < 0)
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