void PostOrderDisplay(Node* root)
{
if (root == nullptr)
{
return;
}
PostOrderDisplay(root->left);
PostOrderDisplay(root->right);
cout << "Post-Order " << root->data;
}