class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j = 0;
        int haystackLen = haystack.size();
        int needleLen = needle.size();
        
        if(0 == needleLen)
            return 0;
        if(needleLen > haystackLen)
            return -1;
        
        int *next = new int[needleLen];
        
        GetNextVal(needle, next);
        
        while(i < haystackLen && j < needleLen)
        {
            if(-1 == j || haystack[i] == needle[j])
            {
                ++i;
                ++j;
            }
            else
            {
                j = next[j];
            }
        }
        
        delete[] next;
        
        if(j == needleLen)
            return i-j;
        else
            return -1;
    }
    
    void GetNextVal(const string &needle, int *next)
    {
        const unsigned int len = needle.size();
        next[0] = -1;
        int k = -1;
        int j = 0;
        
        while(j < len-1)
        {
            if(-1 == k || needle[j] == needle[k])
            {
                ++j;
                ++k;
                if(needle[j]!=needle[k])
                    next[j] = k;
                else
                    next[j]=next[k];
            }
            else
            {
                k = next[k];
            }
        }
    }
};