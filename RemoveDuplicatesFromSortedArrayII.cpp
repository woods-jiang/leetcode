class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() <= 2)
        {
            return nums.size();
        }
        
        vector<int>::iterator it = nums.begin() + 2;
        vector<int>::iterator slow = nums.begin() + 2;
        
        for(; it != nums.end(); ++it)
        {
            if( *it != *(slow-2))
            {
                *slow = *it;
                ++slow;
            }
        }
        
        while(slow != nums.end())
        {
            nums.erase(slow);
        }
        
        return nums.size();
    }
};