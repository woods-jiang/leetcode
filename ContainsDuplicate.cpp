class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return false;
        }
        
        unordered_set<int> m;
        
        for (int i=0; i<nums.size(); i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                return true;
            }
            m.insert(nums[i]);
        }
        
        return false;
    }
};