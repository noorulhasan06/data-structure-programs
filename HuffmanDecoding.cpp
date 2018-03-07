typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;




void decode_huff(node * root,string s)
{
    for(int i = 0; i < s.length(); ){
        node *tmp1 = root;
        while(tmp1->data == '\0'){
            if(s[i] == '1'){
                tmp1 = tmp1->right;
                i++;
            } else{
                tmp1 = tmp1->left;
                i++;
            }
        }
        cout<<tmp1->data;
    }
}
