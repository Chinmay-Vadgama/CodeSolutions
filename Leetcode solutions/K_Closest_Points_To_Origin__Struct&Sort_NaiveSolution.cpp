#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    
    typedef long long ll;
    //O(nlogn) solution
    struct pts{
        double distance;
        vector<int> point;
    }p1,p2;
    
    public:
    double dist(vector<int> point)
    {
        if(!point.empty())
        {
            double l1 = (double)(point.back());
            point.pop_back();
            double l2 = (double)(point.back());
            point.pop_back();
            return(sqrt((double)(((l1*l1)+(l2*l2)))));
        }
        else{
            return(0.0);
        }
                   
    }
    public:
    struct Xgreater
    {
         bool operator()( const pts& lx, const pts& rx ) const {
            return lx.distance > rx.distance;
         }
    };
               
    public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int points_length = points.size();
        vector<pts> mat;
        for(int i=0;i<points_length;i++)
        {
            vector<int> pt = points.back();
            points.pop_back();
            double dis = dist(pt);
            //pts p1;
            p1.distance = dis;
            p1.point = pt;
            mat.push_back(p1);
        }
        sort(mat.begin(),mat.end(),Xgreater());
//        for(int i=0;i<mat.size();i++)
//        {
//            cout << mat[i].distance << " ";
//        }
        vector<vector<int>> ans;
        
        for(int i=0;i<K;i++)
        {
            //pts p1 = new pts();
            p2 = mat.back();
            mat.pop_back();
            ans.push_back(p2.point);
        }
        
        return ans;
        
    }
};