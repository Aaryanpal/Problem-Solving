/*
Topic: Singly Linked-List Insertion
Author: Aryan
*/

#include <iostream>
using namespace std;

// Declaring Node
struct Node
{
    /* data */
    int data;
    struct Node *next;
} *first = NULL;

void CreateLinkedList(int arr[], int n)
{
    struct Node *p, *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        p = new Node;
        p->data = arr[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}
int count(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;   
}

void Insertion(struct Node *p,int digit, int pos)
{
    struct Node *ins;
    ins = new Node;
    ins->data = digit;
    ins->next = NULL;
    if(pos<0 || pos>count(p))
    {
        return ;
    }
    if(pos==0)
    {
        ins->next = first;
        first = ins;
    }
    else{
        for(int i=1;i<pos-1;i++)
        {
           p=p->next;
        }
        ins->next = p->next;
        p->next = ins;
    }
}
void Insertend(struct Node *p,int num)
{
    struct Node *t,*last;
    t = new Node;
    t->data = num;
    t->next = NULL;
    if(p==NULL)
    {
        first = t;
    }else{
       while(p!=NULL)
       {
           p=p->next;
           last = p;
       }
    last->next = t;
    last=t;
    }
    p->next = t;
}

// void InsertionEnd(struct node *p, int digit)
// {
// }

// void Insertionatpos()
// {
// }

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("insert.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int arr[] = {2, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    CreateLinkedList(arr, size);
    //cout<<"IS IT WOKING";
    // InsertionEnd();
    // Insertionatpos();
    Display(first);
    cout<<"\n";
    Insertion(first,10,7);
    
    // cout<<"\n";
    cout<<"Count : "<<count(first);
    cout<<"\n";
    //Insertend(first,1000);
    Display(first);
}