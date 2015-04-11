
class Solution{
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n)
    {
        if((m+n)%2==1)
        {
            return (double)findMedianIndex(A,m,B,n,(m+n+1)/2);
        }
        return ((double)findMedianIndex(A,m,B,n,(m+n)/2)+(double)findMedianIndex(A,m,B,n,(m+n)/2+1))/2;
    }
    
private:
    int findMedianIndex(int A[], int m, int B[], int n, int k)
    {
        if(0==m)
        {
            return B[k-1];
        }
        if(0==n)
        {
            return A[k-1];
        }
        if(1==k)
        {
            return min(A[0], B[0]);
        }
        
        int i=min(m,k/2);
        int j=min(n,k/2);
        
        if(A[i-1]<B[j-1])
        {
            return findMedianIndex(A+i,m-i,B,n,k-i);
        }
        return findMedianIndex(A,m,B+j,n-j,k-j);
    }
};