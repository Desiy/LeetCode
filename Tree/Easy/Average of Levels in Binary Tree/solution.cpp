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
    void getAverage(vector<int>& res,TreeNode* p){
        
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            long sum=0;
            double s=q.size();
            for(int i=0;i<s;++i){
                TreeNode* p=q.front();
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
                q.pop();
                sum+=p->val;
            }
            res.push_back(sum/s);
            
        }
        return res;
    }
};