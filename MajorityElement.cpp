// v1
class Solution {
public:
    int majorityElement(vector<int> &num) {
        map<int, int> m;
    	int result = 0;
    	for (int i = 0; i<num.size(); i++)
    	{
    		if (m.find(num[i]) != m.end())
    		{
    			m[num[i]] += 1;
    		}
    		else
    		{
    			m[num[i]] = 1;
    		}
    	}
    	// 遍历map
    	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    	{
    		if (it->second > num.size()/2)
    		{
    			result = it->first;
    			break;
    
    		}
    	}
    	return result;
    }
};

// V2
class Solution {
public:
    int majorityElement(vector<int> &num) {

    	int result = num[0];
    	int count = 1;
    	
    	for (int i = 1; i<num.size(); i++)
    	{
    		if(count != 0 )
    		{
    		    if(result == num[i])
    		    {
    		        count++;
    		    }
    		    else
    		    {
    		        count--;
    		    }
    		}
    		else
    		{
    		    result = num[i];
    		    count = 1;
    		}
    	}

    	return result;
    }
};
