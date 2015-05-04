class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        // 改变了输入数据的结构
        for(int i=0; i<nums.size();)
        {
            if (nums[i] != i+1 && nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[nums[i]-1])
            {
                swap(nums[i], nums[nums[i]-1]);
            }
            else
            {
                i++;
            }
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != i+1)
            {
                return i+1;
            }
        }
        
        return nums.size()+1;
    }
};