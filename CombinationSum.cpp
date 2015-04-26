class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        
        vector<vector<int>> result;
        
        vector<int> answer;
        
        sort(candidates.begin(), candidates.end());
        
        combineHelper(candidates, 0, 0, target, answer, result);
        
        return result;
    }
    
private:

    void combineHelper(vector<int> &candidates, int start, int sum, int target, vector<int> &answer, vector<vector<int>> &result)
    {
        if(sum == target)
        {
            result.push_back(answer);
            return;
        }
        
        if(start == candidates.size() || candidates[start] + sum > target)
        {
            return;
        }
        
        answer.push_back(candidates[start]);
        
        combineHelper(candidates, start, sum+candidates[start], target, answer, result);
        
        answer.pop_back();
        
        combineHelper(candidates, start+1, sum, target, answer, result);
    }
};