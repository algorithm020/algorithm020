class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        i = j = 0
        for i in range(len(nums)) :
            if nums[i] != 0 :
                nums[j], nums[i] = nums[i], nums[j]
                j += 1

#测试例
#1、
#输入：[0,1,0,3,12]
#预期结果：[1,3,12,0,0]
#实际结果: [1,3,12,0,0]