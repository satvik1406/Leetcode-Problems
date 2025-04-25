class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit = 0
        min_so_far = prices[0]
        for count in range(1, len(prices)):
            min_so_far = min(min_so_far, prices[count])
            max_profit = max(max_profit, prices[count] - min_so_far)
        
        return max_profit


        