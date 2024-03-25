class Solution:
    def validPalindrome(self, s: str) -> bool:
        def isPalindrome(s: str) -> bool:
            return s == s[::-1]

        left, right = 0, len(s) - 1

        while left < right:
            if s[left] != s[right]:
                del_left = s[left + 1:right + 1]
                del_right = s[left:right]

                return isPalindrome(del_left) or isPalindrome(del_right)

            left += 1
            right -= 1

        return True