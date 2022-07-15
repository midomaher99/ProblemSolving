/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize;
    
    //aloocating the new array in the heab
    int* ans = (int*)malloc(numsSize*sizeof(int));
    //building the ans array
    int i;
    int j;
    for (i=0;i<numsSize;i++)
    {
        ans[i]=0;
        for (j=0;j<=i;j++)
        {
            ans[i] += nums[j];
        }
    }
    
    return ans;
}