#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int value){
        val=value;
        next=NULL;
    }
}
void even_after_odd(node* head){
    node* odd=head;
    node* even=head->next;
    node* t=even;

    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=t;
    if(odd->next==NULL){
        even->next=NULL;
    }
}