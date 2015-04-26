class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        
        vector<vector<int>> result;
        
        vector<int> answer;
        
        sort(num.begin(), num.end());
        
        combineHelper(num, 0, 0, target, answer, result);
        
        return result;
    }
    
private:
    void combineHelper(vector<int> &num, int start, int sum, int target, vector<int> &answer, vector<vector<int>> &result)
    {
        if(target == sum)
        {
            result.push_back(answer);
        }
        
        if(start == num.size() || num[start]+sum > target)
        {
            return;
        }
        
        answer.push_back(num[start]);
        
        combineHelper(num, start+1, sum+num[start], target, answer, result);
        
        answer.pop_back();
        
        // 连续相同的元素，只能算一次
        while(start+1 < num.size() && num[start+1] == num[start] )
        {
            start++;
        }
        
        combineHelper(num, start+1, sum, target, answer, result);
    }
};