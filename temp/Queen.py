def solve():
        squareq = square()
        oriQueen = queen(2,0)
        queenlist = [oriQueen]


        result = []
        for cuQueen in queenlist:
                result.append(cuQueen.getLocation())
        print result

def dfs(n,alist):
        blist = alist[:]
        if n == 9:
                return 0;
        for exQueen in blist:
                
        
        
class queen(object):
        def __init__(self,x,y):
                self.x = x
                self.y = y
        def getLocation(self):
                return (self.x,self.y)
        def isCol(self,other):
                if(self.x == other.x or self.y == other.y or abs(self.x - other.x) == abs(self.y - other.y)):
                        return True
                else:	
                        return False
class square(object):
        def __init__(self):
                self.location = []
                for i in range(8):
                        for j in range(8):
                                self.location.append((i,j))
				
	def delapot((x,y)):
                temp = self.location[:]
                temp.remove((x,y))
                return temp
