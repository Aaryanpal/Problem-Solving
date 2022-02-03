#include<iostream>
using namespace std;

//Creating Doubly Linked List;
class Node {
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

};
//Display linked list
void print(Node * head)
{
    while(head!=NULL)
    {
        cout<<head ->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void Insertathead(Node *&head,int d)
{
    Node* temp = new Node (d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void Insertattail(Node *tail,int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void Insertatpos(Node *&tail,Node *&head,int pos,int d)
{
    if(pos==0)
    {
        Insertathead(head,d);
        return ;
    }
    else{
        int cnt = 1;
        Node* curr = head;

        while(cnt<pos-1)
        {
            curr = curr->next;
        }
        if(curr->next==NULL)
        {
            Insertattail(tail,d);
            return ;
        }

        Node* nodetoinsert = new Node(d);
        nodetoinsert->next = curr->next;
        curr->next->prev = nodetoinsert;
        curr->next = nodetoinsert;
        nodetoinsert ->prev = curr;

    }
}
int main()
{
    Node *N1 = new Node(45);
    Node *head = N1;
    Node *tail = N1;
    print(head);

    Insertathead(head,428);
    Insertathead(head,428);
    Insertathead(head,428);
    Insertattail(tail,1546540);
    Insertatpos(tail,head,0,1000);
    print(head);
}