struct Node
  {
     int data;
     struct Node *next;
  }
  
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *node = new Node();
    node->data = data;
    if(head == NULL){
        node->next = NULL;
        return node;
    } else if(position == 0){
        node->next = head;
        return node;
    } else{ Node *tmp = head;
        for(int i=0; i<position-1 ; i++){
            tmp = tmp->next;
        }
           node->next = tmp->next;
           tmp->next = node;
           return head;
    }
    
}
