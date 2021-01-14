from bisect import bisect_left 
class Solution(object):
    
    def bs(self, a, x): 
        i = bisect_left(a, x) 
        if i != len(a) and a[i] == x: 
            return i 
        else: 
            return -1
        
    def dfs(self, stones, currpos, lastjump):
        
        k = self.bs(stones,currpos)
        
        if k==-1:
            return False
        
        possiblejumps = []
        if lastjump==0:
            possiblejumps.append(1)
        elif lastjump==1:
            possiblejumps.append(1)
            possiblejumps.append(2)
        else:
            possiblejumps.append(lastjump-1)
            possiblejumps.append(lastjump)
            possiblejumps.append(lastjump+1)

        if currpos == stones[-1]:
            return True
        
        anslist = []
        #print(currpos)
        #print(possiblejumps)
        for i in possiblejumps:
            anslist.append(self.dfs(stones,currpos+i,i))
        
        #print(anslist)
        return any(anslist)
        
        
    def canCross(self, stones):
        """
        :type stones: List[int]
        :rtype: bool
        """
        '''
        better bruteforce recursive implementation - TC O(3^n) , SC O(n) :: TLE :: Implementation with binary search
        
        '''
        pos = 0
        lastjump = 0
        
        return self.dfs(stones,pos,lastjump)
        