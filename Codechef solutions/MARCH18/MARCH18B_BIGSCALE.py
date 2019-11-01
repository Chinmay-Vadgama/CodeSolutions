import sys
test_case = int(sys.stdin.readline())

for i in range(test_case):
    n = int(sys.stdin.readline())
    item = []
    for j in range(n):
        L = sys.stdin.readline()
        Li = [int(i) for i in L.split()]
        item.append(Li)
    cost=0
    
    for j in item:
        initial_cost = j[0] + ((j[0]*j[2])/100)
        end_cost = initial_cost - ((initial_cost*j[2])/100)
        cost += (j[0] - end_cost)*j[1]
        
    print(cost)
    