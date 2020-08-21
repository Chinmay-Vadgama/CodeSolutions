#include "solution.hpp"
using namespace std;

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
class Solution {
    public:
    vector<int> dfs(Tree* root, vector<int> ans)
    {
        if(root==NULL)
        {
            return ans;
        }
        else if(root->left==NULL && root->right!=NULL)
        {
            vector<int> right = dfs(root->right,ans);
            right[1]+=1;
            return right;
        }
         else if(root->left!=NULL && root->right==NULL)
        {
            vector<int> left = dfs(root->left,ans);
            left[1]+=1;
            return left;
        }
         else if(root->left==NULL && root->right==NULL)
        {
            ans[0]+=1;
            return ans;
        }
        else
        {
            vector<int> right = dfs(root->right,ans);
            vector<int> left = dfs(root->left,ans);
            ans[0] = left[0] + right[0];
            ans[1] = left[1] + right[1] + 1;
            return ans;   
        }
        
    }
    public:
    vector<int> solve(Tree* root) {
        // Write your code here
        ios_base::sync_with_stdio(false);
        vector<int> ans {0,0};
        return dfs(root,ans);
        
    }
};
