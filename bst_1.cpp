Node* insert(Node* root, int Key)
{
    if(root == NULL)
    return new Node(Key);
    else if(root->data < Key)
    root->right = insert(root->right,Key);
    else if(root->data > Key)
    root->left = insert(root->left,Key);
    else
    return root;
}
