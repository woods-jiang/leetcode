class Solution {
public:
    void rotate(int nums[], int n, int k) 
    {
        k = k%n;
        rotateArray(nums, n);
        rotateArray(nums, k);
        rotateArray(nums+k, n-k);
    }
    void rotateArray(int nums[], int n)
    {
        int index = n-1;
        for(int i=0; i<index; i++, index--)
        {
            nums[i] ^= nums[index];
            nums[index] ^= nums[i];
            nums[i] ^= nums[index];
        }
    }
};
