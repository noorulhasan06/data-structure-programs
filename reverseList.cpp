 struct Node
  {
     int data;
     struct Node *next;
  }


Node* Reverse(Node *head)
{
    if(head == NULL || head->next == NULL)
        return head;
     else {
         Node *global_head = Reverse(head->next);
         head->next->next = head;
         head->next = NULL;
         return global_head;
     }
}
