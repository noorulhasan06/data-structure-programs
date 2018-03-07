typedef struct node
{
   int data;
   node *left;
   node *right;
}node;




node *lca(node *root, int v1,int v2)
{
    if(root){
        if(root->data == v1 || root->data == v2) return root;   // case 1
        else{
            node* tmp1 = lca(root->left, v1, v2);
            node* tmp2 = lca(root->right, v1, v2);
            if(!tmp1 && !tmp2) return NULL;      // case 2
            else if(tmp1 && tmp2) return root;  // case 3
            else if(tmp1 && !tmp2){
                return tmp1;    // case 4
            } else if(!tmp1 && tmp2) {
                return tmp2;    // case 5
            }
        }
    }
    return NULL;
}

/*
    Another simplest method is to just compare. If v1 and v2 are both greater than root then soln exist right side else if they both       are smaller than root then soln exist left side else root is the soln.
*/
