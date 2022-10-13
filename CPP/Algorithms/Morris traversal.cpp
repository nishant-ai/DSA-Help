// Morris travel algorithm for inorder traversal
Struct tNode{
  int data;
  Struct tNode* left, tNode* right;
};
void MorrisTraversal(Struct tNode* root){
  Struct tNode *current, *pre;
  if(root==NULL)
    return;
  current=root;
  while(current!=NULL){
    if(current =->left==NULL){
      cout<<curr->data<<"";
      current=current->right;
    }else
      // finding inorder predecessor
      pre=current->left;
    while(pre->right!=NULL && pre->right!=current)
      pre=pre->right;
    if(pre->right==NULL){ //making current as right child as predecessor
      pre->right=current;
      current=current->left;
    }else
    {
      pre-right=NULL;
      cout<<current->data<<" ";// for going back to root
      current=current->right;
    }
  }
}
Struct tNode* node=new tNode;
node->data=data;
node->left=NULL;
node->right=NULL;
return(node);
}
int main()
{
  MorrisTraversal(root);
  return 0;
}
      
  
