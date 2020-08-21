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
    int dfs(Tree *root, int num){
        if(root==NULL)
        {
            return num;
        }
        else
        {
             if(root->left == NULL && root->right!=NULL)
             {
                 num = dfs(root->right,num);
                 num+=1;
             }
             else if(root->right == NULL && root->left!=NULL)
             {
                 num = dfs(root->left,num);
                 num+=1;
             }
             else if(root->right!=NULL && root->right!=NULL)
             {
                 num = (dfs(root->left,num) + dfs(root->right,num));
             }
             
             return num;
        }
        return num;
        
    }
    public:
    int solve(Tree* root) {
        // Write your code here
        ios_base::sync_with_stdio(false);
        int num=0;
        if (root==NULL) return num;
        return dfs(root,num);
    }
};
