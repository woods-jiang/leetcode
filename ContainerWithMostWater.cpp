int maxArea(int height[], int n) {
    int maxVolume = 0;
    for(int i=0,j=n-1; i<n; )
    {
        int v=0;
        if(height[i]<=height[j])
        {
            v=(j-i)*height[i];
            i++;
        }
        else
        {
            v=(j-i)*height[j];
            j--;
        }
        if(v>maxVolume)
        {
            maxVolume=v;
        }
    }
    return maxVolume;
}