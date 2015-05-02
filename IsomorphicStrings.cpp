class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size())
            return false;
        
        unordered_map<char,char> ms;
        unordered_map<char,char> mt;
        
        for(int i=0; i<s.size(); i++)
        {
            if(ms.find(s[i]) == ms.end())
                ms[s[i]] = t[i];
            else if (ms[s[i]] != t[i])
                return false;
        }
        
        for(int i=0; i<t.size(); i++)
        {
            if(mt.find(t[i]) == mt.end())
                mt[t[i]] = s[i];
            else if (mt[t[i]] != s[i])
                return false;
        }
        
        return true;
    }
};