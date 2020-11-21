int removeDuplicates(int* nums, int numsSize) {
    for (i = 1, j = 0; i < numsSize; i++)
        if (nums[i - 1] != nums[i]) { nums[++j] = nums[i]; }
    return (numsSize > 0 ? j + 1 : j);
}

//测试例
//1、
//输入：[0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 5, 7, 7, 7, 7]
//预期结果：[0, 1, 2, 3, 4, 5, 7]
//实际结果：[0, 1, 2, 3, 4, 5, 7]