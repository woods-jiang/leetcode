class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.size();
        
        if(0 == n)
        {
            return 0;
        }
        
        int count = 0;
        
        while(n && s[n-1] == ' ')
        {
            n--;
        }
        
        while(n && s[n-1] != ' ')
        {
            n--;
            count++;
        }
        
        return count;
    }
};