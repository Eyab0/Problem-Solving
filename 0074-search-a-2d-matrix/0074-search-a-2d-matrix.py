class Solution:
    def searchMatrix(self, mtx: List[List[int]], target: int) -> bool:
        rows,col = len(mtx),len(mtx[0])
        t,b=0,rows-1
        
        while t<=b:
            mid = (t+b) // 2
            if target > mtx[mid][-1]:
                t = mid+1
            elif target < mtx[mid][0]:
                b = mid-1
            else:
                break
        if not (t<=b):
            return False
        l,r = 0,col-1
        mid = (t+b) // 2
        while l<=r:
            m = (l+r) // 2
            if target == mtx[mid][m]:
                return True
            elif target > mtx[mid][m]:
                l = m+1
            elif target < mtx[mid][m]:
                r = m-1

        return False
            
                