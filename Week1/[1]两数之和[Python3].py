cclass Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        memory = {}
        for i, e in enumerate(nums):
            if e in memory: return (memory[e], i)
            memory[(target - e)] = i
        return []

#测试例
#1、
#输入：[2,7,11,15] 9
#预期结果：[0,1]
#实际结果：[0,1]