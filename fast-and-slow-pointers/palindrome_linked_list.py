class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        def getMiddle(head: ListNode):
            fast = slow = head

            while fast and fast.next:
                slow = slow.next
                fast = fast.next.next

            return slow

        def reverse(head: ListNode):
            prev, curr = None, head

            while curr:
                next = curr.next
                curr.next = prev
                prev = curr
                curr = next

            return prev

        # Reverse the second half
        middle = reverse(getMiddle(head))

        while middle:
            if head.val != middle.val:
                return False
            else:
                head = head.next
                middle = middle.next

        return True