class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hashset = set()

        for x in nums:
            if(x in hashset):
                return True
            else:
                hashset.add(x)
        return False
        