void IntBinaryTree::makeDeletion(TreeNode *&tree)
{
// Used to hold node that will be deleted
TreeNode *nodeToDelete = tree;
// Used to locate the point where the // left subtree is attached
TreeNode *attachPoint;
if (tree−>right == nullptr) {
// Replace tree with its left subtree
tree = tree−>left;
}
else if (tree−>left == nullptr) {
// Replace tree with its right subtree
tree = tree−>right;
}
else //The node has two children
{
// Move to right subtree
attachPoint = tree−>right; // Locate the smallest node in the
right subtree
// by moving as far to the left as possible
while (attachPoint−>left != nullptr)
attachPoint = attachPoint−>left;
// Attach the left subtree of the original tree // as the left subtree
of the smallest node // in the right subtree
attachPoint−>left = tree−>left;
// Replace the original tree with its right subtree
tree = tree−>right;
}
// Delete root of original tree
delete nodeToDelete;
}
