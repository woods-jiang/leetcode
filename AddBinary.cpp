class Solution {
public:
    string addBinary(string a, string b) {
        
        int lenA = a.size()-1;
        int lenB = b.size()-1;
        int carry = 0;
        string result;
        
        while(lenA>=0 || lenB>=0)
        {
            int x = carry;
            if(lenA>=0)
            {
                x = x + a[lenA]-'0';
            }
            if(lenB>=0)
            {
                x = x + b[lenB]-'0';
            }

            result = (char)(x%2+'0')+result;
            carry = x/2;
            lenA--;
            lenB--;
        }
        if(carry > 0)
            result = '1'+result;
            
        return result;
    }
};