  struct Node
  {
     int data;
     struct Node *next;
  }

Node* MergeLists(Node *headA, Node* headB)
{
    if(headA == NULL) return headB;
    else if (headB == NULL ) return headA;
    Node *headC;
    if(headA->data < headB->data){
        headC = headA;
        headA = headA->next;
    } else{
        headC = headB;
        headB = headB->next;
    }
    Node* tmp = headC;
    while(headA != NULL && headB != NULL){
        if(headA->data < headB->data){
            tmp->next = headA;
            tmp = tmp->next;
            headA = headA->next;
        } else{
            tmp->next = headB;
            tmp = tmp->next;
            headB = headB->next;
        }
    }
    if(headA != NULL) tmp->next = headA;
    else tmp->next = headB;
    return headC;
}
