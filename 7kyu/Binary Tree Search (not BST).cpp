/*
Binary Tree Search (not BST)
Given a number and a binary tree (not a BST):

return True if the given number is in the tree
return False if it isn't

*/

//Solution

struct Node{
  int val;
  Node *left = nullptr;
  Node *right = nullptr;
};

bool search(int n, Node *root){
  //Your code goes here
  if (!root) return false;
  else if (root->val == n) return true;
  return search(n, root->right) || search(n, root->left);
}
