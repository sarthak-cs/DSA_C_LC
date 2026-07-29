/*
Problem: 238. Product of Array Except Self

LeetCode link: https://leetcode.com/problems/product-of-array-except-self/

*/

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int i;
    int prod1 = 1;
    int prod2 = 1;

    for (i = 0; i < numsSize; i++){
        ans[i] = prod1;
        prod1 *= nums[i];
    }
    
    for (i = numsSize - 1; i >= 0; i--){
        ans[i] *= prod2;
        prod2 *= nums[i];
    }
    return ans;
}
