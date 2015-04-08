class Solution {
public:
    int trailingZeroes(int n) {
        //n = abs(n);
        int result = 0;
        while(n)
        {
            n = n/5;
            result += n;
        }
        return result;
    }
};
