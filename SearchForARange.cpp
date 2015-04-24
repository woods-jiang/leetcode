class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size()-1;
        int mid = 0;
        vector<int> result({-1,-1});
        
        // 先找到左边第一个target
        while(start <= end)
        {
            mid = start + (end - start) / 2; //防止溢出
            
            if(nums[mid] < target)
                start = mid+1;
            else
                end = mid-1;
        }
        
        if(start > nums.size()-1 || nums[start] != target)
            return result;
            
        // 保存最左边第一个数的下标
        result[0] = start;
        
        end = nums.size() -1;
        
        // 再找到右边第一个target
        while(start <= end)
        {
            mid = start + (end - start) / 2; //防止溢出
            
            if(nums[mid] <= target)
                start = mid+1;
            else
                end = mid-1;
        }
        result[1] = end;
        
        return result;
    }
};