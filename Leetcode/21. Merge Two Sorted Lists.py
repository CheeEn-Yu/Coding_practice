# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        ans = ListNode()
        ptr_ans = ans
        if list1 == None and list2 != None:
            return list2
        elif list2 == None and list1 != None:
            return list1
        elif list2 == None and list1 == None:
            return None

        while(list1 and list2):
            if(list1.val <= list2.val):
                ptr_ans.next = list1
                list1, ptr_ans = list1.next, list1
            else:
                ptr_ans.next = list2
                list2, ptr_ans = list2.next, list2
        if list1 or list2:
            ptr_ans.next = list1 if list1 else list2
        return ans.next
