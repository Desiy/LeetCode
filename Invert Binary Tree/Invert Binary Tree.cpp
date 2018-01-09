struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    
    TreeNode* invertTree_nonrecursively(TreeNode* root) {
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* p=st.top();
            st.pop();
            if(p){
                st.push(p->left);
                st.push(p->right);
                swap(p->left,p->right);
            }
        }
        return root;
    }
     TreeNode* invertTree_recursively(TreeNode* root) {
        if(root){
            swap(root->left,root->right);
            invertTree(root->left);
            invertTree(root->right);
        }
        return root;
    }
};