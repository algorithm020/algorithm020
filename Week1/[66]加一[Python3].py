class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for i in range(len(digits)-1,-1,-1):
            if digits[i]==9:
                digits[i]=0
            else:
                digits[i]+=1
                return digits
        return [1]+digits

#测试例
#1、
#输入：[4,9,9,9]
#预期结果：[5,0,0,0]
#实际结果: [5,0,0,0]