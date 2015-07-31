class Solution {
public:
    double myPow(double x, int n) {
        if(isZero(x) && n<-1)
        {
            return INT_MAX;
        }
        
        int sign = 1;
        
        if(x < 0)
        {
            if(n % 2 == 1)
            {
                sign = -1;
            }
            x = -x;
        }
        
        if(n < 0)
        {
            x = 1/x;
            n = -n;
        }
        
        return sign*Helper(x, n);
    }
private:
    bool isZero(double x)
    {
        if(x > -1e-20 && x < 1e-20)
        {
            return true;
        }
        return false;
    }
    
    double Helper(double x, int n)
    {
        if(n == 1)
        {
            return x;
        }
        if(0 == n)
        {
            return 1;
        }
        
        if(n & 1)
        {
            return x*pow(Helper(x,n/2),2);
        }
        else
        {
            return pow(Helper(x,n/2),2);
        }
    }
};