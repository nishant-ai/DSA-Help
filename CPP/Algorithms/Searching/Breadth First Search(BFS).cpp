#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() {
        val = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> bfs(TreeNode* root) {
    if(!root) return {};
    vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty())
    {
        TreeNode *top_ele = q.front();
        if(top_ele->left) q.push(top_ele->left);
        if(top_ele->right) q.push(top_ele->right);
        
        ans.push_back((q.front())->val);
        q.pop();
    }
    return ans;
}

int main() {
    TreeNode *root = new TreeNode(3), *temp = root;
    temp->left = new TreeNode(9);
    temp->right = new TreeNode(20);
    temp = temp->right;
    temp->left = new TreeNode(15);
    temp->right = new TreeNode(7);
    vector<int> BFSTraversal = bfs(root);
    for(auto &val:BFSTraversal) cout<<val<<" ";
    cout<<endl;
    return 0;
}