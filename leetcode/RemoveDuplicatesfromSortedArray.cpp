class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int length = nums.size();
        int k = length;
        int iterator = 0;
        for (iterator = length - 2; iterator >= 0; iterator--)
        {
            if (nums[iterator] == nums[iterator + 1])
            {
                nums.erase(nums.begin() + iterator);
                k--;
            }
        }
        return k;
    }
};