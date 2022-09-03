class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        dict = {}
        for i,c in enumerate(s):
            if c in dict.keys():
                if  dict[c] != t[i]:
                    return False
            dict[c] = t[i]
        dict.clear()
        s,t = t,s
        for i,c in enumerate(s):
            if c in dict.keys():
                if  dict[c] != t[i]:
                    return False
            dict[c] = t[i]
        return True