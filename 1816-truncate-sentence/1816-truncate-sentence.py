class Solution(object):
    def truncateSentence(self, s, k):
        list = s.split(" ")
        str = " "
        return str.join(list[:k])
        