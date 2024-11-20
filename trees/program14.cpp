#include <iostream>
#include "TreeNode.h"
#include "BinaryTree.h"
int main() {
BinaryTree tree;
tree.insert(5);
tree.insert(3);
tree.insert(7);
tree.insert(2);
tree.insert(4);
tree.insert(6);
tree.insert(8);
tree.inOrderTraversal();
std::cout << "Search 6: " << (tree.search(6) ? "Found" : "Not Found") << std::endl;
std::cout << "Search 10: " << (tree.search(10) ? "Found" : "Not Found") << std::endl;
return 0;
}
