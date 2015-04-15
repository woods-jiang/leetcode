class Solution {
public:
    int compareVersion(string version1, string version2) {
      int index1 = 0, index2 = 0;
    	while (index1!=version1.length() || index2!=version2.length())
    	{
    		int sum1 = 0, sum2 = 0;
    		while (index1 != version1.length())
    		{
    			if (version1[index1] == '.')
    			{
    				index1++;
    				break;
    			}
    			sum1 = sum1*10 + version1[index1] - '0';
    			index1++;
    		}
    		while (index2 != version2.length())
    		{
    			if (version2[index2] == '.')
    			{
    				index2++;
    				break;
    			}
    			sum2 = sum2*10 + version2[index2] - '0';
    			index2++;
    		}
    		if (sum1 > sum2)
    		{
    			return 1;
    		}
    		else if (sum1 < sum2)
    		{
    			return -1;
    		}
    	}
    
    	return 0;
    }
};