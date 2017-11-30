
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class Solution {
public:
    bool isSymmetric_iteratively(TreeNode* root) {
        if(!root) return true;
        stack<TreeNode*>sl,sr;
        TreeNode*l=root->left,*r=root->right;
        sl.push(root);
        sr.push(root);
        while(l||r||!sl.empty()||!sr.empty()){
            if((l&&!r)||(!l&&r)) return false;
            if(l&&r){
                if(l->val!=r->val) return false;
                sl.push(l);
                sr.push(r);
                l=l->left;
                r=r->right;
            }
            else{
                l=sl.top()->right;
                r=sr.top()->left;
                sl.pop();
                sr.pop();
            }
        }
        return true;
    }
    bool isSymmetric_recursively(TreeNode* root) {
        if(!root) return true;
        return isSymmetric(root->left,root->right);

    }
    bool isSymmetric(TreeNode* left,TreeNode* right){
        if(!left&&!right)
            return true;
        if(!left||!right)
            return false;
        return (left->val==right->val)&&isSymmetric(left->left,right->right)&&isSymmetric(left->right,right->left);
    }
};