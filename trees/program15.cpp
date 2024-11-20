void IntBinaryTree::remove(TreeNode *&tree, int num)
{
if (tree == nullptr) return;
if (num < tree−>value)
remove(tree−>left, num);
else if (num > tree−>value)
remove(tree−>right,num);
else
// We have found the node to delete.
makeDeletion(tree);