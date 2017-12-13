struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int height_left=0,height_right=0;
        height_left=Height(root->left);
        height_right=Height(root->right);
        if(abs(height_left-height_right)<=1)
            return isBalanced(root->left)&&isBalanced(root->right);
        else return false;
    }
    int Height(TreeNode* root){
        if(!root) return 0;
        else if(root->left&&root->right){
            return 1+max(Height(root->left),Height(root->right));    
        }
        else if(root->left||root->right){
            if(root->left) return 1+Height(root->left);
            if(root->right) return 1+Height(root->right);
        }
        else return 1;
        
            
    }
};