#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node *link;
};

void Insert(Node **, int);

void Print(Node *);

int main()
{
    // creating linked list head
    Node *head = nullptr;
    for (int i = 0; i < 10; ++i)
    {
        Insert(&head, i);
        Print(head);
    }
    return 0;
}

void Insert(Node **head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->link = nullptr;

    if (*head != nullptr) temp->link = *head;
    *head = temp;
}

void Print(Node *head)
{
    Node *temp = head;
    cout << "Start printing...\n";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }

    cout << "\n";
}