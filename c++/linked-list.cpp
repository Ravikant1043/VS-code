#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int x)
    { // condtructor of the class for a node
        data = x;
        next = NULL;
    }
};

void insertatend(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// for displaying the elements
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    insertatend(head, 78);
    insertatend(head, 45);
    display(head);
    return 0;
}