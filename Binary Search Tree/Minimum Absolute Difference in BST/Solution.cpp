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
    int helper(TreeNode* node,int& min){
        int diff=0;
        TreeNode* p=node;
        if(node->left){
            node=node->left;
            while(node->right) node=node->right;
            diff=p->val-node->val;
            if(diff<min) min=diff;
        }
        
        if(p->right) {
            node=p->right;
            while(node->left) node=node->left;
            if(node->val-p->val<min) min=node->val-p->val;
        }
        
        if(p->left) helper(p->left,min);
        if(p->right) helper(p->right,min);
        
        return min;
    }
    int getMinimumDifference(TreeNode* root) {      
        int min=INT_MAX;
        return helper(root,min);
    }
};