class BinaryTree {
private:
TreeNode* root;
void insertRecursive(TreeNode*& node, int value) {
if (node == nullptr) { node = new TreeNode(value); }
else if (value < node->data) { insertRecursive(node->left, value); }
else { insertRecursive(node->right, value); }
}
bool searchRecursive(TreeNode* node, int value) {
if (node == nullptr) { return false; }
if (node->data == value) { return true; }
else if (value < node->data) { return searchRecursive(node->left, value); }
else { return searchRecursive(node->right, value); }
}
void inOrderTraversal(TreeNode* node) {
if (node != nullptr) {
inOrderTraversal(node->left);
std::cout << node->data << " ";
inOrderTraversal(node->right);
} }
public:
BinaryTree() : root(nullptr) {}
void insert(int value) { insertRecursive(root, value); }
bool search(int value) { return searchRecursive(root, value); }
void inOrderTraversal() {
inOrderTraversal(root);
std::cout << std::endl;
}
};
