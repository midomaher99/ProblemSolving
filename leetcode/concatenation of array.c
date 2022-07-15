/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    *returnSize = 2 * numsSize;
    
    //aloocating the new array in the heab
    int* ans = (int*)malloc((*returnSize)*sizeof(int));
    //building the ans array
    int i;
    for (i=0;i<numsSize;i++)
    {
        ans[i + numsSize]=ans[i] = nums[i];
    }
    
    return ans;
}