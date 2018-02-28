/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int getTilt(TreeNode* root,int& res){
        if(!root) return 0;
        int left=getTilt(root->left,res);
        int right=getTilt(root->right,res);
        
        res+=abs(left-right);
        return left+right+root->val;
    }
    int findTilt(TreeNode* root) {
       int res=0;
        getTilt(root,res);
        return res;
    }
};