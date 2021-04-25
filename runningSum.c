int* runningSum(int* nums, int numsSize, int* returnSize){
    int *res = malloc(sizeof(int) * numsSize);

    *returnSize = numsSize;
    for (int i = 0; i < numsSize; i++) {
        res[i] = 0;
        for (int j = 0; j <= i; j++)
            res[i] += nums[j];
    }
    return (res);
}