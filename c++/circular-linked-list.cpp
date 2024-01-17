#include<iostream>
using namespace std;
class node{

    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};

void insertat_head(node* &head,int val){
    
    node* n=new node(val);
    node* t=head;
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }

    while(t->next!=head){
        t=t->next;
    }
    t->next=n;
    n->next=head;
    head=n;
}

void deleteat_head(node* &head){
    node* todelete;
    node* t=head;
    while(t->next!=head){
        t=t->next;
    }
    todelete=head;
    t->next=head->next;
    head=head->next;
    delete todelete;

}
void delete_atend(node* &head,int pos)
{
    if(pos==1){
        return deleteat_head(head);
    }
    node* t=head;
    int c=1;
    while(c<pos){
        t=t->next;
        c++;
    }

    node* todelete=t->next;
    t->next=t->next->next;
    delete todelete;
}
void insertat_tail(node* &head,int val){

    if(head==NULL){
        insertat_head(head,val);
    }

    node* n=new node(val);
    node* t=head;

    while(t->next!=head){
        t=t->next;
    }
    t->next=n;
    n->next=head;
}

void display(node* head){
    node* t=head;
    do
    {
        cout<<t->val<<"->";
        t=t->next;

    } while (t!=head);
    cout<<endl;
}

int main()
{
    node* head=NULL;
    insertat_head(head,67);
    insertat_tail(head,89);
    insertat_head(head,897);
    display(head);
    delete_atend(head,2);
    display(head);
    return 0;
}