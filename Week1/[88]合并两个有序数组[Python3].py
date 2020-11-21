class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        nums1[m :] = nums2
        nums1.sort()

#测试例
#1、
#输入：[1,2,3,0,0,0] 3 [2,5,6] 3
#预期结果：[1,2,2,3,5,6]
#实际结果：[1,2,2,3,5,6]