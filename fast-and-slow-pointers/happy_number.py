class Solution:
    def isHappy(self, n: int) -> bool:
        def digit_square_sum(n: int) -> int:
            sum = 0

            while n:
                rem = n % 10
                sum += rem ** 2
                n //= 10

            return sum

        
        slow = fast = n

        while True:
            slow = digit_square_sum(slow)
            fast = digit_square_sum(digit_square_sum(fast))

            if slow == fast:
                return 1 if slow == 1 else 0