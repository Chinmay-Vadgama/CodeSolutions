# Gonna learn DP this time...for sure!
---------
Problems

For problem to be solved by DP it should be 
1. Optimization problem
2. It should have overlapping subproblems - we can break down current problem to smaller problems and solve them to get answers for current bigger problem 
3. Optimal substructure : Can you actually solve current problem by accumulating results from subproblems "OPTIMALLY"?
---------

Frog Jump : https://leetcode.com/problems/frog-jump/

A frog is crossing a river. The river is divided into some number of units, and at each unit, there may or may not exist a stone. The frog can jump on a stone, but it must not jump into the water.

Given a list of stones' positions (in units) in sorted ascending order, determine if the frog can cross the river by landing on the last stone. Initially, the frog is on the first stone and assumes the first jump must be 1 unit.

If the frog's last jump was k units, its next jump must be either k - 1, k, or k + 1 units. The frog can only jump in the forward direction.

> Implemented basic bruteforce recursive approach with binary search 
  >> from current position and currentjump length we can go to next : current_pos + currentjump + [0,1,-1]
  >> recursive tree will be of O(3^n) 
  >> results in TLE

Examples : stones = [0,1,3,5,6,8,12,17]   ; Ans : True
           stones = [0,1,2,3,4,8,9,11]    ; Ans : False

Questions
> Are we repeating recursive calls? ( Theoritically Are there overlapping subproblems?      => Yes, we are calling recursive function with same params again and again..
> Can we solve it optimally after accumulating results from all subsequent calls to subproblems?  => Yes, If we can reach n-1 th position with last jump as k , we should be able to find whether we can reach nth position with k,k-1 or k+1 jump value

==> It's a DP problem

> Now, How do we actually store recursive call info so we do not make repeated calls??.............to be continued
