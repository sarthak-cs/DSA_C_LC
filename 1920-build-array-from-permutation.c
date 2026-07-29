/*
Problem: 1920. Build Array from Permutation

LeetCode link: https://leetcode.com/problems/build-array-from-permutation/

*/

int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int i;
    for (i = 0; i < numsSize; i++){
        ans[i] = nums[nums[i]];
    }

    *returnSize = numsSize;
    return ans;
}
