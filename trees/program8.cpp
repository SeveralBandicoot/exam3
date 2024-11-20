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
std::cout << " Pre-Order " << root->data;
display(root->left);
display(root->right);
}