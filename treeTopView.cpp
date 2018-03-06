struct node
{
    int data;
    node* left;
    node* right;
};


void printLeft(node *root){
    if(root){
        printLeft(root->left);
        cout<<root->data<<" ";
    }
}

void printRight(node *root){
    if(root){
        cout<<root->data<<" ";
        printRight(root->right);
    }
}

void topView(node * root) {
    if(root){
        printLeft(root->left);
        cout<<root->data<<" ";
        printRight(root->right);
    }
}
