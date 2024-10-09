#include <queue>

class MyStack
{
public:
    std::queue<int> q1;
    std::queue<int> q2;
    std::queue<int> *q_emp;
    std::queue<int> *q_not_emp;

public:
    MyStack()
    {
        q_not_emp = nullptr;
        q_emp = nullptr;
    }

    void push(int x)
    {
        q_not_emp = q1.empty() ? &q2 : &q1;
        q_not_emp->push(x);
    }

    int pop()
    {
        q_not_emp = q1.empty() ? &q2 : &q1;
        q_emp = q1.empty() ? &q1 : &q2;
        int retVal;
        int size = q_not_emp->size();

        for (int i = 1; i < size; i++)
        {
            q_emp->push(q_not_emp->front());
            q_not_emp->pop();
        }
        retVal = q_not_emp->front();
        q_not_emp->pop();
        return retVal;
    }

    int top()
    {
        q_not_emp = q1.empty() ? &q2 : &q1;
        q_emp = q1.empty() ? &q1 : &q2;
        int retVal;
        int size = q_not_emp->size();

        for (int i = 1; i < size; i++)
        {

            q_emp->push(q_not_emp->front());
            q_not_emp->pop();
        }
        retVal = q_not_emp->front();
        q_not_emp->pop();
        q_emp->push(retVal);
        return retVal;
    }

    bool empty()
    {
        if (q1.empty() && q2.empty())
            return true;
        else
            return false;
    }
};