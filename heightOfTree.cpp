class Node {
    int data;
    Node* left;
    Node* right;
};


    int height(Node* root) {
        if(root){
            int left = height(root->left);
            int right = height(root->right);
            if(left > right)
                return left+1;
            else
                return right+1;
        }
        return -1;
    }
  
