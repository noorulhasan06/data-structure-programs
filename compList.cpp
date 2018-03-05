  struct Node
  {
     int data;
     struct Node *next;
  }

int CompareLists(Node *headA, Node* headB)
{
  while(headA != NULL && headB != NULL && headA->data == headB->data){
      headA = headA->next;
      headB = headB->next;
  }
    if(headA != NULL || headB != NULL)
        return 0;
    else return 1;
}
