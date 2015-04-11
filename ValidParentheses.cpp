class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stack_t;
        
        for (unsigned int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
                case '(':
                case '[':
                case '{':
                {
                    stack_t.push(s[i]);
                    break;
                }
                case ')':
                {
                    if (stack_t.empty() || stack_t.top() != '(')
                        return false;
                    stack_t.pop();
                    break;
                }
                case ']':
                {
                    if (stack_t.empty() || stack_t.top() != '[')
                        return false;
                    stack_t.pop();
                    break;
                }
                case '}':
                {
                    if (stack_t.empty() || stack_t.top() != '{')
                        return false;
                    stack_t.pop();
                    break;
                }
                default:
                    break;
            }
        }
        
        return stack_t.empty();
    }
};