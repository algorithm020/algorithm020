void rotate(int* nums, int numsSize, int k) {//解法1
    int res[numsSize];
    for (int i = 0; i < numsSize; i++) res[(i + k) % numsSize] = nums[i];
    for (int j = 0; j < numsSize; j++) nums[j] = res[j];
}

void rotate(int* nums, int numsSize, int k) {//解法2
    (k > numsSize) ? (k = k % numsSize) : (k = k);
    if (k >= 1) {
        int tmp[k];
        for (int i = 0; i < k; i++)
            tmp[i] = nums[numsSize - k + i];
        for (int i = (numsSize - 1); (i - k) >= 0; i--)
            nums[i] = nums[i - k];
        for (int i = 0; i < k; i++)
            nums[i] = tmp[i];
    }
    else if (k == 0) { ; }
}

void rotate(int* nums, int numsSize, int k) {//解法3
    for (int i = 0, j = k % numsSize, previous = nums[i], anchor = i, count = numsSize; count > 0; count--, j = (i + k) % numsSize) {
        int tmp = nums[j];
        nums[j] = previous;
        previous = tmp;
        if ((i = j) == anchor) {
            i = (i + 1) % numsSize;
            previous = nums[i];
            anchor = i;
        }
    }
}


//测试例
//1、
//输入：[1,2,3,4,5,6,7,8,9,11,12] 3
//预期结果：[9,11,12,1,2,3,4,5,6,7,8]
//实际结果：[9,11,12,1,2,3,4,5,6,7,8]