
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
private:
    int maxdia=0;
public:
    int findLength(TreeNode* ptr){
        if(ptr==NULL) return 0;
        int leftlen=findLength(ptr->left);
        int rightlen=findLength(ptr->right);
        maxdia=(leftlen+rightlen>maxdia?leftlen+rightlen:maxdia);
        return max(leftlen+1,rightlen+1);
    }
    int diameterOfBinaryTree(TreeNode* root) { 
        findLength(root);
        return maxdia;
    }
};