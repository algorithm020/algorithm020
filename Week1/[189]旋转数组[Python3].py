class Solution:#解法1
    def rotate(self, nums: List[int], k: int) -> None:
        for i in range(0, k):
            nums.insert(0, nums.pop())

class Solution:#解法2
    def rotate(self, nums: List[int], k: int) -> None:
        k = k % len(nums)
        nums[:] = nums[-k:] + nums[:-k]

class Solution:#解法3
    def rotate(self, nums: List[int], k: int) -> None:
        n, k =len(nums), k % len(nums)
        def swap(l , r):
            while(l < r):
                nums[l], nums[r] = nums[r], nums[l]
                l = l + 1
                r = r - 1
        swap(0, n - k - 1)
        swap(n - k, n - 1)
        swap(0, n - 1)


#测试例
#1、
#输入：[1,2,3,4,5,6,7,8,9] 5
#预期结果：[5,6,7,8,9,1,2,3,4]
#实际结果：[5,6,7,8,9,1,2,3,4]