void moveZreos(int* nums, int numsSize) {
	int x = 0;
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] != 0)
			nums[x++] = nums[i];
		for (int i = x; i < numsSize; i++) {
			nums[i] = 0;
	}
	}
}