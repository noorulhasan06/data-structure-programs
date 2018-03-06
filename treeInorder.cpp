struct node
{
    int data;
    node* left;
    node* right;
};



void inOrder(node *root) {
    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
