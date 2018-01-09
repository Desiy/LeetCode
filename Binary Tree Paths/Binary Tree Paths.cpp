struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class Solution {
public:
    vector<string> binaryTreePaths_nonrecursively(TreeNode* root) {
        vector<string>res;
        if(!root) return res;
        stack<TreeNode*> st;
        stack<string> ss;
        st.push(root);
        ss.push(to_string(root->val));
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            string str=ss.top();
            ss.pop();
            if(node->left) {
                st.push(node->left);
                ss.push(str+"->"+to_string(node->left->val));
            }
            if(node->right){
                st.push(node->right);
                ss.push(str+"->"+to_string(node->right->val));
            }
            if(!node->left&&!node->right){
                res.push_back(str);
            }
        }
        return res;
    }
    vector<string> binaryTreePaths_recursively(TreeNode* root) {
        vector<string>res;
        if(!root) return res;
        Path(root,to_string(root->val),res);
        return res;
    }
    void Path(TreeNode* root,string str,vector<string>& res){
        if(!root->left&&!root->right)
            res.push_back(str);
        if(root->left) 
            Path(root->left,str+"->"+to_string(root->left->val),res);
        if(root->right)
            Path(root->right,str+"->"+to_string(root->right->val),res);
            
    }
};