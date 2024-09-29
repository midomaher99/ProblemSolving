#include <string>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> my_stack;
        unordered_map<char, char> my_umap = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        for (char c : s)
        {
            if (my_umap.find(c) != my_umap.end())
            {
                my_stack.push(c);
            }
            else
            {
                if (my_stack.empty())
                {
                    return false;
                }
                if (c == my_umap[my_stack.top()])
                {
                    my_stack.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return my_stack.empty();
    }
};