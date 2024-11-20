
// zWeek13_Trees.cpp : This file contains the 'main' function. Program execution
begins and ends there.
//
#include <iostream>
struct Node
{
int data;
Node* left;
Node* right;
};
Node* createNode(int num)
{
Node* newNode = new Node();
newNode->data = num;
newNode->left = nullptr;
newNode->right = nullptr;
return newNode;
}
void display(Node* root)
{
if (root == nullptr)
{
return;
}
std::cout << " " << root->data;
display(root->left);
display(root->right);
}
int main()
{
std::cout << "PreOrder Traversal : ";
Node* root;
// use the createNode Function to fill the Tree with #s
root = createNode(5);
root->left = createNode(3);
root->right = createNode(7);
root->left->left = createNode(1);
root->left->right = createNode(4);
root->right->left = createNode(6);
root->right->right = createNode(8);
display(root);
std::cout << "\n\n";
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
