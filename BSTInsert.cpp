typedef struct node
{
   int data;
   node * left;
   node * right;
}node;




node * insert(node * root, int value) {
    node* nd = new node();
    nd->data = value;
    nd->left = NULL;
    nd->right = NULL;
    if(root){
        node *tmp1 = root, *tmp2;
        while(tmp1){
            tmp2 = tmp1;
            if(value > tmp1->data) tmp1 = tmp1->right;
            else tmp1 = tmp1->left;
        }
        if(value > tmp2->data)
            tmp2->right = nd;
        else tmp2->left = nd;
    } else{
        root = nd;
    }
   return root;
}
