class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int pos[256];
        
        memset(pos,-1, sizeof(pos));
        
        int result = 0;
        int last = -1; 
        
        for(int i=0; i<s.size(); i++)
        {
            char c = s[i];
            
            if(pos[c] > last) //出现了重复的字符
            {
                last = pos[c];
            }
            
            pos[c] = i;
            result = max(result, i-last);
        }
        return result;
    }
};