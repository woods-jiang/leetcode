class Solution {
public:
    void reverseWords(string &s) {
        
        if( s.empty() )
            return;

        int i = 0;
        int k = 0;

        while(i<s.size() && s[i]==' ')
        {
            i++;
        }

        while(i < s.size() )
        {
            int start = k;
            
            while(i<s.size() && s[i]!=' ')
            {
                s[k++] = s[i++];
            }
                
            if(k-start > 1)
            {
                reverseSingleWords(s, start, k-1);
            }
            
            while(i<s.size() && s[i]==' ')
            {
                i++;
            }
            
            if(i < s.size())
            {
                s[k++] = ' ';
            }
        }
        
        s = s.substr(0,k);
        
        reverseSingleWords(s, 0, s.size()-1);
    }
    
private:
    void reverseSingleWords(string &s, int k, int i)
    {
        for(; k<i; k++, i--)
        {
            swap(s[k], s[i]);
        }
    }
};