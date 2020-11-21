int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i, * a = malloc(sizeof(int[digitsSize + 1])), c = 1;
    for (i = digitsSize - 1; i >= 0; i--)
        a[i + 1] = c ? (c = digits[i] == 9) ? 0 : digits[i] + 1 : digits[i];
    return *returnSize = digitsSize + c, a[i + 1] = c, a + !c;
}

//测试例
//1、
//输入：[4,9,9,9]
//预期结果：[5,0,0,0]
//实际结果：[5,0,0,0]