
Page
1
of 2
// zWeek13_Trees.cpp : This file contains the 'main' function. Program execution
begins and ends there.
//
#include <iostream>
#include<string>
using namespace std;
struct Node {
string data;
Node* left;
Node* right;
};
Node* createNode(std::string num) {
Node* newNode = new Node();
newNode->data = num;
newNode->left = nullptr;
newNode->right = nullptr;
return newNode;
}
void display(Node* root) {
if (root == nullptr) {
return;
}
display(root->left);
std::cout << " " << root->data;
display(root->right);
}
int main()
{
Node* node[10];
// use the createNode Function to fill the Tree with #s
for(int i=0;i<=9;++i)
node[i] = createNode("middle");
node[1]->data = "Left of middle";
node[2]->data = "Right of middle";
node[0]->left = node[1];
node[0]->right = node[2];
node[3]->data = "Left Left middle";
node[4]->data = "Right Right middle";
node[1]->left = node[3];
node[2]->right = node[4];
cout << "\n\BST ";
display(node[0]);
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