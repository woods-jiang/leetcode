class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> result;
        
        for(int i=0; i<tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int num2 = result.top();
                result.pop();
                int num1 = result.top();
                result.pop();
                
                if(tokens[i] == "+")
                {
                    result.push(num1+num2);
                }
                else if(tokens[i] == "-")
                {
                    result.push(num1-num2);
                }
                else if(tokens[i] == "*")
                {
                    result.push(num1*num2);
                }
                else
                {
                    result.push(num1/num2);
                }
            }
            else
            {
                result.push(atoi(tokens[i].c_str()));
            }
        }
        return result.top();
    }
};