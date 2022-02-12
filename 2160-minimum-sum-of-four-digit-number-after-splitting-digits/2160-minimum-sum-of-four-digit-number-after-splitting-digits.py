class Solution(object):
    def minimumSum(self, num):
        res = sorted(list(str(num)))
        return(((int(res[0])*10 + int(res[2]))) + ((int(res[1])*10 + int(res[3]))))        