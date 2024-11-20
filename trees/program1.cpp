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