int main()
{
std::cout << "Hello World!\n";
Node* root;
// use the createNode Function to fill the Tree with #s
root = createNode(5);
root->left = createNode(3);
root->right = createNode(7);
root->left->left = createNode(1);
root->left->right = createNode(4);
root->right->left = createNode(6);
root->right->right = createNode(8);
return 0;
}

