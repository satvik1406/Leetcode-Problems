class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_ones = 0
        local_max = 0
        for val in nums:
            if val == 0:
                max_ones = max(max_ones,local_max)
                local_max = 0
            else:
                local_max += 1
            print(local_max)
        
        return max(max_ones, local_max)

        