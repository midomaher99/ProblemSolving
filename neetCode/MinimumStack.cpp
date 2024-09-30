#include <stack>
using namespace std;
class MinStack
{
private:
    stack<int> my_stack;
    stack<int> min_stack;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        my_stack.push(val);

        if (min_stack.empty())
            min_stack.push(val);
        else
            min_stack.push(min(val, min_stack.top()));
    }

    void pop()
    {
        my_stack.pop();
        min_stack.pop();
    }

    int top()
    {
        return my_stack.top();
    }

    int getMin()
    {
        return min_stack.top();
    }
};
