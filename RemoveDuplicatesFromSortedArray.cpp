class Solution {
public:
    int removeDuplicates(int A[], int n) {
        
        if(0==n)
            return 0;
        if(1==n)
            return 1;
            
        int j = 0;
        
        for(int i=1; i<n; i++)
        {
            if(A[i] != A[i-1])
            {
                j++;
            }
            
            A[j] = A[i];
            
        }
        
        return j+1;
    }
};