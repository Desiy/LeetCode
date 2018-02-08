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
    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        return sumOf(root,0,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);
    }
    int sumOf(TreeNode* root,int pre,int sum){
        if(!root) return 0;
        int cur=pre+root->val;
        return (cur==sum)+sumOf(root->left,cur,sum)+sumOf(root->right,cur,sum);
    }
};