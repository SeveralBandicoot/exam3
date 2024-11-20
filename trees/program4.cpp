void InOrderDisplay(Node* root)
{
if (root == nullptr)
{
return;
}
InOrderDisplay(root->left);
cout << "In-Order " << root->data;
InOrderDisplay(root->right);
}