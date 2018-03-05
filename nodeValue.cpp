  struct Node
  {
     int data;
     struct Node *next;
  }

int Get(Node *head,int *positionFromTail){
  if(head!= NULL){
      int count = Get(head->next, positionFromTail);
      if(*positionFromTail == 0){
          *positionFromTail-=1;
          return head->data;
      }
          *positionFromTail-=1;
      return count;
  }
    else{
        return 1;
    }
}

int GetNode(Node *head,int positionFromTail)
{
    return Get(head, &positionFromTail);
}
