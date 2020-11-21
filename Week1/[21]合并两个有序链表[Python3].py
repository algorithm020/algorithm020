class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        if l1 and l2:
            if l1.val > l2.val: l1, l2 = l2, l1
            l1.next = self.mergeTwoLists(l1.next, l2)
        return l1 or l2

#测试例
#1、
#输入：[1,2,4]，[1, 3, 4]
#预期结果：[1,1,2,3,4,4]
#实际结果：[1,1,2,3,4,4]