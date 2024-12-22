class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = [1] * len(nums) 
        for i in range(1, len(nums)):
            res[i] = res[i-1] * nums[i-1]

        prodSoFar = 1
        for i in range(len(nums)-1, -1, -1):
            res[i] *= prodSoFar
            prodSoFar *= nums[i]

        return res



    #nums 1 2 3 4
    #res  1 1 2 6
    #prod 1 




        