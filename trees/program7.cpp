Node* root;
root = createNode('m');
root->left = createNode('g');
root->right = createNode('p');
root->left->left = createNode('a');
root->left->right = createNode('k');
root->right->left = createNode('o');
root->right->right = createNode('q');
display(root);
