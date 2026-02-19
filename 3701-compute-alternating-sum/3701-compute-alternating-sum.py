class Solution:
    def alternatingSum(self, nums: List[int]) -> int:
        a=0
        b=0
        for i in range(0,len(nums)):
            if i%2==0:
                a+=nums[i]
            else:
                b+=nums[i] 
        return a-b       