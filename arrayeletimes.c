#include <stdio.h>

int signFunc(int x);

int arraySign(int* nums, int numsSize)
{
    int res = 1;

    if (numsSize >= 1 && numsSize <= 1000) {
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] >= -100 && nums[i] <= 100)
                res *= signFunc(nums[i]);
        }
    }
    return (res);
}

int signFunc(int x)
{
    if (x > 0) return (1);
    else if (x < 0) return (-1);
    return (0);
}