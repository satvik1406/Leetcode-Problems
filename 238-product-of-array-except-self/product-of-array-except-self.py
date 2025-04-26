class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        product_factor = 1
        res = nums.copy()

        for count in range(1,n):
            res[count] = res[count] * res[count-1]

        for count in range(n-1,0,-1):
            res[count] = res[count-1] * product_factor
            product_factor *= nums[count]

        res[0] = product_factor

        return res


            
        