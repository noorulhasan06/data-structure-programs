struct Node
  {
     int data;
     struct Node *next;
  }

Node* Delete(Node *head, int position)
{
  // Complete this method
    if(head == NULL)
        return head;
    else if(position == 0){
        head = head->next;
        return head;
    } else{
        Node *tmp = head;
        for(int i=0; i<position-1; i++){
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
        return head;
    }
}
