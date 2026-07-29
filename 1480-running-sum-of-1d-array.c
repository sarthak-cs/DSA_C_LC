/*
Problem: 1480. Running Sum of 1d Array

LeetCode link: https://leetcode.com/problems/running-sum-of-1d-array

*/

int* runningSum(int* nums, int numsSize, int* returnSize) {

    for (int i = 1; i < numsSize; i++){
        nums[i] += nums[i - 1];
    }
    *returnSize = numsSize;
    return nums;
}
