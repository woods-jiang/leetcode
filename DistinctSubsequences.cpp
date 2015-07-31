class Solution {
public:
    int numDistinct(string s, string t) {
        
        vector<int> dp(t.size()+1, 0);
        
        dp[0] = 1;
        
        for(int i=0; i<s.size(); i++)
        {
            for(int j=t.size()-1; j>=0; j--)
            {
                dp[j+1] = dp[j+1] + (s[i] == t[j] ? dp[j]:0);
            }
        }
        
        return dp[t.size()];
    }
};