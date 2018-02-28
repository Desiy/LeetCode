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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(root==NULL) return root;
        while(root->val<L||root->val>R){
            if(root->val<L) root=root->right;
            else if(root->val>R) root=root->left;
        } 
        TreeNode* Ltemp=root,*Rtemp=root;
        while(Ltemp->left){
            if(Ltemp->left->val<L) Ltemp->left=Ltemp->left->right;
            else Ltemp=Ltemp->left;
        }
        while(Rtemp->right){
            if(Rtemp->right->val>R) Rtemp->right=Rtemp->right->left;
            else Rtemp=Rtemp->right;
        }
        return root;
    }
};