class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = []
        for i in range(len(nums)):
            ans.append((nums[i], i))
        
        ans = sorted(ans)

        i = 0
        j = len(ans) - 1

        while i < j:
            if(ans[i][0] + ans[j][0] == target):
                return sorted([ans[i][1], ans[j][1]])
            elif(ans[i][0] + ans[j][0] < target):
                i += 1
            else:
                j -= 1

        return [0]

