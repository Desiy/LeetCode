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
    int find(TreeNode* root,int min_val){
        if(root==NULL) return -1;
        if(root->val!=min_val)
             return root->val;
        
        int l=find(root->left,min_val),r=find(root->right,min_val);
        if(l==-1) return r;
        if(r==-1) return l;        
        return min(l,r);
}
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL) return -1;
        return find(root,root->val);
        
    }
};