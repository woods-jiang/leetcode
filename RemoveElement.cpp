class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        
        int j = 0;
        
        for(int i=0; i<n; i++)
        {
            if(j != i)
                A[j] = A[i];
            if(A[i]!=elem)
                j++;
        }
        return j;
    }
};