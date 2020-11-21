struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    if (l1 == NULL && l2 == NULL) return NULL;

    struct ListNode* head;
    if (l1->val > l2->val) {
        head = l2;
        l2 = l2->next;
    }
    else {
        head = l1;
        l1 = l1->next;
    }
    struct ListNode* cur = head;
    while (l1 != NULL && l2 != NULL) {
        if (l1->val > l2->val) {
            cur->next = l2;
            l2 = l2->next;
        }
        else {
            cur->next = l1;
            l1 = l1->next;
        }
        cur = cur->next;
    }
    if (l1 != NULL) {
        cur->next = l1;
    }
    else {
        cur->next = l2;
    }
    return head;
}

//测试例
//1、
//输入：[1,2,4]，[1, 3, 4]
//预期结果：[1,1,2,3,4,4]
//实际结果：[1,1,2,3,4,4]