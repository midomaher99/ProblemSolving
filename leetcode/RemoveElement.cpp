#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (int iterator = 0; iterator < nums.size(); iterator++)
        {
            if (nums[iterator] != val)
            {
                nums[k] = nums[iterator];
                k++;
            }
        }
        return k;
    }
};