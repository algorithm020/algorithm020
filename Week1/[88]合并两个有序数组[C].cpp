void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int i = m - 1, j = n - 1;
	int len = m + n - 1;
	while (i >= 0 && j >= 0) {
		if (nums1[i] >= nums2[j])
			nums1[len--] = nums1[i--];
		else
			nums1[len--] = nums2[j--];
	}
	while (i >= 0)
		nums1[len--] = nums1[i--];
	while (j >= 0)
		nums1[len--] = nums2[j--];
}

//测试例
//1、
//输入：[1,2,3,0,0,0] 3 [2,5,6] 3
//预期结果：[1,2,2,3,5,6]
//实际结果：[1,2,2,3,5,6]