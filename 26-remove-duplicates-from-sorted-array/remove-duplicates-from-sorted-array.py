class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ind = 1
        for i in range(1,len(nums)):
            if nums[i-1] != nums[i]:
                nums[ind] = nums[i]
                ind += 1
        
        return ind