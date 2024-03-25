class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        head, length = 0, 0

        start, curr_sum, max_sum = 0, 0, float("-inf")

        for end in range(len(nums)):
            curr_sum += nums[end]

            if end - start + 1 == k:
                if curr_sum > max_sum:
                    max_sum = curr_sum

                    head = end
                    length = end - start + 1

                curr_sum -= nums[start]
                start += 1

        return nums[head:head + length]
};