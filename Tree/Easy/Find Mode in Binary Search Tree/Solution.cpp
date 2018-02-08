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
    void helper(TreeNode* node,int& cnt_val,int& cnt,int& modes_max,vector<int>& res){
        if(!node) return ;
        if(node->left) helper(node->left,cnt_val,cnt,modes_max,res);
        if(node->val!=cnt_val){
            cnt_val=node->val;
            cnt=1;
        }
        else
            cnt++;
        if(cnt>modes_max){
            modes_max=cnt;
            res.clear();
            res.push_back(cnt_val);
        }
        else if(cnt==modes_max)
            res.push_back(cnt_val);
        
        helper(node->right,cnt_val,cnt,modes_max,res);
    } 
    vector<int> findMode(TreeNode* root) {        
        vector<int> res;
        int cnt_val=0,cnt=0,modes_max=0;
        helper(root,cnt_val,cnt,modes_max,res);
        
        return res;
        
    }
};