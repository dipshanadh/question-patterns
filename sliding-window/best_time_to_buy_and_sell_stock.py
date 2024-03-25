class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 0:
            return 0

        profit = 0
        buying = prices[0]

        for selling in prices:
            if selling > buying:
                profit = max(profit, selling - buying)
            else:
                buying = selling

        return profit
