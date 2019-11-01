#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> rt;
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(target-nums[i]==nums[j])
                {
                    rt.push_back(i);
                    rt.push_back(j);
                    break;
                }
            }
        }
        return rt;
    
}};