struct node
{
    int data;
    node* left;
    node* right;
}


void levelOrder(node * root) {
  queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *tmp = q.front();
        q.pop();
        cout<<tmp->data<<" ";
        if(tmp->left) q.push(tmp->left);
        if(tmp->right) q.push(tmp->right);
    }
  
}
