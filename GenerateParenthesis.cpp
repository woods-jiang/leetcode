class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        string s;
        vector<string> result;
        
        GetParenthesis(n, n, s, result);
        
        return result;
    }
private:
    void GetParenthesis(int left, int right, string &s, vector<string> &result)
    {
        if(0==left && 0==right)
        {
            result.push_back(s);
            return;
        }
        if(left > 0)
        {
            s.push_back('(');
            GetParenthesis(left-1, right, s, result);
            s.pop_back();
        }
        if(right>left)
        {
            s.push_back(')');
            GetParenthesis(left, right-1, s, result);
            s.pop_back();
        }
    }
};