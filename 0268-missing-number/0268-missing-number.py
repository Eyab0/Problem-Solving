class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        dict= {}
        n = len(nums)
        for i in nums:
            dict[i] = True
        for i in range(n+1):
            if i not in dict:
                return i
            
        