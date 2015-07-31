class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> result(digits.size(), 0);
        
        int carry = 1;
        
        for(int i=digits.size()-1; i>=0; i--)
        {
            int tmp = digits[i] + carry;
            result[i] = tmp%10;
            carry = tmp/10;
        }
        
        if(carry > 0)
        {
            result.insert(result.begin(), carry);
        }
        
        return result;
    }
};