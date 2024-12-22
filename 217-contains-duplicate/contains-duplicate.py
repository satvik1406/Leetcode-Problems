class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hash_map = {}

        for i in range(len(nums)):
            hash_map[nums[i]]= hash_map.get(nums[i], 0) + 1
            if hash_map.get(nums[i], 0) > 1:
                return True
        
        return False
            
        