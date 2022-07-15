/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize)
{
    
    *returnSize = numsSize;
    //aloocating the new array in the heab
    int* ans = (int*)malloc(numsSize*sizeof(int));
    //building the ans array
    int i;
    for (i=0;i<numsSize;i++)
    {
        ans[i] = nums[nums[i]];
    }
    
    return ans;
}