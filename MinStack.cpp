class MinStack {
public:
    void push(int x) {
        num.push(x);
        if(min.size() == 0)
        {
            min.push(x);
            return;
        }
        if(min.top() > x)
            min.push(x);
        else
            min.push(min.top());
    }

    void pop() {
        if(!num.empty())
        {
            num.pop();
            min.pop();
        }
    }

    int top() {
        return num.top();
    }

    int getMin() {
        return min.top();
    }
private:
    stack<int> num;
    stack<int> min;
    
};