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
    TreeNode* convertBST(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* p=root;
        int sum=0;
        while(!st.empty()||p){
            if(p){
                st.push(p);
                p=p->right;
            }
            else{
                p=st.top()->left;
                int temp=sum;
                sum+=st.top()->val;
                st.top()->val+=temp;
                st.pop();
            }
        }
        return root;
    }
};