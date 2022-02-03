#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for the data: "<<value<<endl;
    }
};

void insertathead(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void Deleteatfron(Node * &head, int pos)
{
    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int cnt = 1;
        while (cnt <= pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void Display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *N1 = new Node(10);
    Node *head = N1;
    insertathead(head, 45);
    insertathead(head, 55);
    insertathead(head, 65);
    insertathead(head, 75);
    insertathead(head, 85);
    Display(head);
   
    Deleteatfron(head,0);
    Display(head);


}