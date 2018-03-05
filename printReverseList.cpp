  struct Node
  {
     int data;
     struct Node *next;
  }

void ReversePrint(Node *head)
{
    if(head != NULL){
        ReversePrint(head->next);
        cout<<head->data<<endl;
    }
  
}
