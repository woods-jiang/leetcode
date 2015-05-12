class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() <= 1)
        {
            return nums.size();
        }
        
        vector<int>::iterator slow = nums.begin();
        vector<int>::iterator it = nums.begin();
        
        for( ; (it+1) != nums.end(); ++it)
        {
            if(*it != *(it+1))
            {
                slow++;
            }
            *slow = *(it+1);
        }
        slow++;
        
        // 删除其他多余的元素
        while(slow != nums.end())
        {
            nums.erase(slow);
        }
        
        return nums.size();
    }
};