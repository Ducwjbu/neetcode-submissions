from collections import defaultdict
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        ans = defaultdict(int)
        
        for i in range(len(s)):
            ans[s[i]] += 1
            ans[t[i]] -= 1

        return all(v == 0 for v in ans.values()) 
        