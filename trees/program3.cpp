void display(Node* root)
{
if (root == nullptr)
{
return;
}
std::cout << " "<<root->data;
display(root->left);
display(root->right);
}