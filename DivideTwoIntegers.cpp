class Solution {
public:
    int divide(int dividend, int divisor) {
        
        long long a = dividend;
        long long b = divisor;
        
        if(a < 0)
            a = -a;
        if(b < 0)
            b = -b;
        
        long long result = 0;
        
        while(a >= b)
        {
            long long tmp = b;
            
            for(long long i = 1; a>=tmp; i<<=1, tmp<<=1)
            {
                a -=tmp;
                result +=i;
            }
        }
        
        if(result >= INT_MAX && 0 == (dividend<0)^(divisor<0))
            return INT_MAX;
        
        return (int)(dividend<0)^(divisor<0)? -result:result;
    }
};