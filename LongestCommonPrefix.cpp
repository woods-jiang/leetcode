class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result;
        
        if(strs.size() == 0)
        {
            return result;
        }
        
        for(int i=0; i<strs[0].size(); i++)
        {
            char c = strs[0][i];
            int j = 0;
            
            for(; j<strs.size(); j++)
            {
                if(strs[j][i] != c)
                {
                    break;
                }
            }
            
            if(j == strs.size())
            {
                result.push_back(c);
            }
            else
            {
                return result;
            }
        }
        
        return result;
    }
};