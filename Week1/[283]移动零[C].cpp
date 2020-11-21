void moveZeroes(int* nums, int numsSize) {
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0)
            nums[j++] = nums[i];
    }
    for (int i = j; i < numsSize; i++) {
        nums[i] = 0;
    }
}

//测试例
//1、
//输入：[0,1,0,3,12]
//预期结果：[1,3,12,0,0]
//实际结果：[1,3,12,0,0]