#include <vector>
using namespace std;
class Solution
{
private:
    int counter = 1;

public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        while (!students.empty() && !sandwiches.empty())
        {
            if (students.front() == sandwiches.front())
            {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
            }
            else
            {
                if (students.front() == students.back())
                {
                    if (++counter >= students.size())
                        break;
                }
                else
                {
                    counter = 1;
                }
                students.push_back(students.front());
                students.erase(students.begin());
            }
        }
        return students.empty() ? 0 : students.size();
    }
};