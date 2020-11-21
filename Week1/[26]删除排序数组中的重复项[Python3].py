class Solution:#解法1
    def removeDuplicates(self, nums: List[int]) -> int:
        a, b = 0, 1
        while b < len(nums) :
            if nums[a] == nums[b] : nums.pop(a)
            else :
                a += 1
                b += 1
        return len(nums)

class Solution:#解法2
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums : return 0
        seen = 1
        for i in range(1, len(nums)) :
            if nums[i] != nums[i - 1] :
                nums[seen] = nums[i]
                seen += 1
        return seen

#测试例
#1、
#输入：[0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 5, 7, 7, 7, 7]
#预期结果：[0, 1, 2, 3, 4, 5, 7]
#实际结果：[0, 1, 2, 3, 4, 5, 7]