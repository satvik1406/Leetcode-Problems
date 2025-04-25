class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        sum_hash_table = {}

        for count in range(len(nums)):
            if target - nums[count] in sum_hash_table:
                return [sum_hash_table[target - nums[count]], count]
            
            sum_hash_table[nums[count]] = count

        return [-1,-1]

        