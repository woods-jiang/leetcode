class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for(int i=0; i<s.size(); i++)
        {
            result *= 26;
            result += s[i]-'A'+1;
        }
        return result;
    }
};