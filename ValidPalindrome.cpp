class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.size() <= 1)
            return true;
            
        for(int i=0, j=s.size()-1; i<j; )
        {
            while(i < j && !alphanumeric(s[i]))
                i++;
            while(i < j && !alphanumeric(s[j]))
                j--;
                
            if(i < j && toLower(s[i]) != toLower(s[j]))
            {
                return false;
            }
            
            i++;
            j--;
        }
        
        return true;
    }
private:
    bool alphanumeric(char c)
    {
        if((c>='A'&& c<='Z') || (c>='a'&&c<='z') || (c>='0'&&c<='9') )
            return true;
        else
            return false;
    }
    char toLower(char c)
    {
        if(c>='A' && c<='Z')
            return c + 32;
    }
};