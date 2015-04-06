class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i=1;
        int count=0;
        while(n)
        {
            n=(n-1)&n;
            count++;
        }
        return count;
    }
};
