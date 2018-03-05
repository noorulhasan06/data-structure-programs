   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }

Node* SortedInsert(Node *head,int data)
{
    Node *orgHead = head;
    if(head == NULL){
        Node* head = new Node();
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
        return head;
    }
    Node* tmp = head;
    while(head!=NULL && head->data < data){
        tmp = head;
        head = head->next;
    }
    if(tmp == head){
        head = new Node();
        head->data = data;
        head->prev = NULL;
        head->next = tmp;
        tmp->prev = head;
        return head;
    }    else if (head == NULL){
        Node *tmp2 = new Node();
        tmp2->data = data;
        tmp->next = tmp2;
        tmp2->prev = tmp;
        tmp2->next = head;
        return orgHead;
    }
    else{
        Node *tmp2 = new Node();
        tmp2->data = data;
        tmp->next = tmp2;
        head->prev = tmp2;
        tmp2->prev = tmp;
        tmp2->next = head;
        return orgHead;
    }
}
