"""
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

M: 2 → 4 → 3   = 342
N: 5 → 6 → 4   = 465

342 + 465 = 807 → output: 7 → 0 → 8
"""

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def traverse(L: ListNode):
    pass
def addTwoNumbers(l1: ListNode, l2: ListNode):
    pass


M_0 = ListNode(2)
M_1 = ListNode(4)
M_2 = ListNode(3)

N_0 = ListNode(5)
N_1 = ListNode(6)
N_2 = ListNode(4)


M_0.next = M_1
M_1.next = M_2

N_0.next = N_1
N_1.next = N_2


if __name__ == "__main__":
    demo = addTwoNumbers(M_0, N_0)
    traverse(demo)