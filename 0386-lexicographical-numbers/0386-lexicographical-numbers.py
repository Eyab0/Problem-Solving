class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        
        list = []
        def generateNums(x: int):
            for i in range(0,10):
                nextNum = x *10 + i
                if nextNum > n:
                    return
                else:
                    list.append(nextNum)
                    generateNums(nextNum)
        for i in range(1,10):
            if i <= n:
                list.append(i)
                generateNums(i)
        return list