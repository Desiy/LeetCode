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
    bool isSameTree(TreeNode* p, TreeNode* q) {    
        if(p==NULL||q==NULL) return (p==q);
        TreeNode* tree1=p,*tree2=q;
        if (tree1->val == tree2->val) 
            return (isSameTree(tree1->left,tree2->left)&&isSameTree(tree1->right,tree2->right));
         else return false;

        }
};