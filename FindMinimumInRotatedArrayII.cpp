class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;
        int mid = 0;
        
        if(0==end)
        {
            return nums[0];
        }
        
        while(nums[start] >= nums[end])
        {
            
            if(end - start == 1)
            {
                mid = end;
                break;
            }
            
            mid = (start+end)>>1;
            
            if(nums[start]==nums[mid]&&nums[mid]&&nums[end])
                return FindMinInOrder(nums);
            
            if(nums[start] <= nums[mid])
                start = mid;
            else if(nums[mid] <= nums[end])
                end = mid;
        }
        return nums[mid];
    }
    
    int FindMinInOrder(vector<int> &nums)
    {
        int result=nums[0];
        
        for(unsigned int i=1; i<nums.size(); i++)
        {
            if(nums[i] < result)
            {
                result = nums[i];
            }
        }
        
        return result;
    }
};