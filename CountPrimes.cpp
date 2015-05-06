class Solution {
public:
    int countPrimes(int n) {
        int result = 0;
        
        // 未初始化，值非0
        bool *pNotPrime = new bool[n];
        memset(pNotPrime, false, n);
        
        for(int i=2; i*i<n; i++)
        {
            if(!pNotPrime[i])
            {
                int ii = i*i;
                while(ii < n)
                {
                    pNotPrime[ii] = true;
                    ii  = ii + i;
                }
            }
        }
        
        for(int i=2; i<n; i++)
        {
            if(!pNotPrime[i])
            {
                result++;
            }
        }
        
        delete[] pNotPrime;
        
        return result;
    }
};