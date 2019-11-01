import sys
from collections import defaultdict
test_case = int(sys.stdin.readline())
for i in range(test_case):
    n = int(sys.stdin.readline())
    L = sys.stdin.readline()
    Li = [int(i) for i in L.split()]
    d = defaultdict(int)
    for i in Li:
         d[i]=d[i]+1
    ans=0
    for i in d.items():
        ans = ans+i[1]-1
    print(ans)
        
         
