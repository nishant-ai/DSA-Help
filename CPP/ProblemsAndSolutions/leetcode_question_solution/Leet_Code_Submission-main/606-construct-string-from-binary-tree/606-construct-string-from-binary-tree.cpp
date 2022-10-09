/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,string &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans=ans.append(to_string(root->val));
            return;
        }
        ans=ans.append(to_string(root->val));
        ans=ans.append("(");
        solve(root->left,ans);
        ans=ans.append(")");
        if(root->right!=NULL){
            ans=ans.append("(");
            solve(root->right,ans);
            ans=ans.append(")");
        }
    }
    string tree2str(TreeNode* root) {
        string ans="";
        solve(root,ans);
        return ans;
    }
};