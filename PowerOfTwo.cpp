class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(0 == n || INT_MIN == n)
        {
            return false;
        }
 
        if((n&(n-1)) == 0)
        {
            return true;
        }
        return false;
    }
};