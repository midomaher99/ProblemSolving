class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 1;

        for (int iterator = 1; iterator < nums.size(); iterator++)
        {
            if (nums[iterator] != nums[iterator - 1])
            {
                nums[k] = nums[iterator];
                k++;
            }
        }
        return k;
    }
};