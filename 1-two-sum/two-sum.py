class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}
        for i in range(len(nums)):
            num_map[nums[i]] = i
        
        for i in range(len(nums)):
            if target - nums[i] in num_map:
                if i != num_map[target - nums[i]]:
                    return [i, num_map[target - nums[i]]]
        
        return []

                