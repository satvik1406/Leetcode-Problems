class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        maxSoFar = values[0]
        res = 0
        for i in range(1,len(values)):
            if res < maxSoFar+values[i]-i:
                print(maxSoFar, values[i],i)
                res = maxSoFar+values[i]-i
            maxSoFar = max(maxSoFar,values[i]+i)
        
        return res
            