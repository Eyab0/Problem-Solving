class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        dict = {}
        n = len(nums) // 2
        for i in nums:
            if i in dict:
                dict[i] +=1
            else:
                dict[i] = 1
        for num,val in dict.items():
            if val > n:
                return num
            