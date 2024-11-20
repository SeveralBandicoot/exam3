
Page
1
of 2
// zWeek13_Trees.cpp : This file contains the 'main' function. Program execution
begins and ends there.
//
#include <iostream>
class TreeNode {
public:
int data;
TreeNode* left;
TreeNode* right;
TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};
class BinaryTree {
private:
TreeNode* root;
void insertRecursive(TreeNode*& node, int value) {
if (node == nullptr) {
node = new TreeNode(value);
}
else if (value < node->data) {
insertRecursive(node->left, value);
}
else {
insertRecursive(node->right, value);
}
}
bool searchRecursive(TreeNode* node, int value) {
if (node == nullptr) {
return false;
}
if (node->data == value) {
return true;
}
else if (value < node->data) {
return searchRecursive(node->left, value);
}
else {
return searchRecursive(node->right, value);
}
}
void inOrderTraversal(TreeNode* node) {
if (node != nullptr) {
inOrderTraversal(node->left);
std::cout << node->data << " ";
inOrderTraversal(node->right);
}
}
public:
BinaryTree() : root(nullptr) {}
void insert(int value) {
insertRecursive(root, value);
}
bool search(int value) {
return searchRecursive(root, value);
}
void inOrderTraversal() {
inOrderTraversal(root);
std::cout << std::endl;
}
};
int main() {
BinaryTree tree;
int x[]{ 5,3,6,4,7,9,1 };
for (int i = 0; i < 7; i++)
tree.insert(x[i]);
tree.inOrderTraversal();
std::cout << "Search 6: " << (tree.search(6) ? "Found" : "Not Found") <<
std::endl;
std::cout << "Search 10: " << (tree.search(10) ? "Found" : "Not Found") <<
std::endl;
return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started:
// 1. Use the Solution Explorer window to add/manage files
// 2. Use the Team Explorer window to connect to source control
// 3. Use the Output window to see build output and other messages
// 4. Use the Error List window to view errors
// 5. Go to Project > Add New Item to create new code files, or Project > Add
Existing Item to add existing code files to the project
// 6. In the future, to open this project again, go to File > Open > Project and
select the .sln file
