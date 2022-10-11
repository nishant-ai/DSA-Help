#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data)
    {
        left = NULL;
        right = NULL;
        val = data;
    }
};

void Preorder(Node* root, vector<int> &pre)
{
    if(!root) return;
    pre.push_back(root->val);
    Preorder(root->left, pre);
    Preorder(root->right,pre);
    return;
}

int main()
{
    Node* head = new Node(1);
    head->right = new Node(4);
    head->left = new Node(2);
    head->left->right = new Node(3);

    vector<int> pre;

    Preorder(head,pre);

    for(int i=0; i<pre.size(); i++)
    {
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    return 0;
}