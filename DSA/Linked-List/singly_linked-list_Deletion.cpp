/*
Author: Aryan
Topic : Singly Linked-List Deletion
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void createLL(int arr[], int size)
{
    struct Node *last, *p;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < size; i++)
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
    int count =0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}

void DeleteFirst(struct Node *head, int index)
{
    struct Node *p;
    if (head == NULL || index > count(head))
    {
        return;
    }

    if (index == 1)
    {
        p = first;
        first = first->next;
        delete p;
    }
    else
    {
        for (int i = 1; i < index - 1; i++)
        {
            p = head;
            head = head->next;
        }
        p->next = head->next;
        delete p;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("insert.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    std::ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    createLL(arr, n);
    
    Display(first);

    DeleteFirst(first,2);
    // DeleteFirst(first,1);

    cout<<"\n";
    Display(first);

    return 0;
}
