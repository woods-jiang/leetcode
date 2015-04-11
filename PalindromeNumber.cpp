class Solution {
public:
    bool isPalindrome(int x) {
            
        if(x < 0)
            return false;
            
        int tmpX = x;
        int count = 1;
        
        // x的位数等于count的位数
        while(tmpX>=10)
        {
            count = count*10;
            tmpX = tmpX/10;
        }
        
        // 开始比较最后一位和第一位
        while(count >= 10)
        {
            int high = x/count;
            int low = x%10;
            if(high!=low)
                return false;
            x = x%count;
            x = x/10;
            count = count/100;
        }
        return true;
    }
};