class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        start, sum, min_length = 0, 0, float("inf")

        for end, value in enumerate(nums):
            sum += value

            while sum >= target:
                min_length = min(min_length, end - start + 1)

                sum -= nums[start]
                start += 1

        return 0 if min_length == float("inf") else min_length