struct node
{
    int data;
    node* left;
    node* right;
};



void preOrder(node *root) {
    if(root){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
