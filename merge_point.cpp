   struct Node
   {
       int data;
       Node* next;
   }

int FindMergeNode(Node *headA, Node *headB)
{   
    Node* tmp = headA;
    while(headB!=NULL){
        headA = tmp;
        while(headA != NULL && headA != headB){
            headA = headA->next;
        }
        if(headA == headB) break; 
        headB = headB->next;
    }
    return headA->data;
}
