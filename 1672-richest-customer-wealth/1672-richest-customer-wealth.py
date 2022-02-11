class Solution(object):
    def maximumWealth(self, accounts):
        m=0;
        for i in accounts:
            m = max(m,sum(i))
        return m        