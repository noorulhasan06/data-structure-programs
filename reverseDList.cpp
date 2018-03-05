   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }

Node* Reverse(Node* head)
{
    if(head == NULL) return head;
    Node *tmp = NULL;
    while(head->next){
        tmp = head->next;
        head->next = head->prev;
        head->prev = tmp;
        head = tmp;
    }
    head->next = head->prev;
    head->prev = NULL;
    return head;
}
