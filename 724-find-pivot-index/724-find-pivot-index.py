class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        
        sum = 0
        for i in nums:
            sum+=i
            
        sum2 = 0
        for index,num in enumerate(nums):
            sum-=num
            
            if sum == sum2:
                return index
            sum2+=num
            
        return -1
        