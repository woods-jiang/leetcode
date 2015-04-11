class Solution {
public:
    int reverse(int x) {
        long long int result=0;
        int sign = 1;
        
        if(x<0)
        {
            x = -x;
            sign = -1;
        }
        
        while(x>0)
        {
            result = result*10 + x%10;
            x = x/10;
        }
        
        if(result>INT_MAX)
            return 0;
        
        return (int)result*sign;
    }
};