#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};


void mergeTwolinkedlist(node *head1,node* head2){
    node* p1=head1;
    node* p2=head2;
    node* d=new node(0);
    node* p3=d;

    // checking the values stored in both the lists and then putting the as theri min or max;
    while(p1=NULL && p2!=NULL)
    {
        if(p1->val<p2->val){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return d->next;
}
void insertatHead(node* &head,int val){

    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    
    head=n;
}

void insertatTail(node* &head,int val){

    if(head==NULL){
        insertatHead(head,val);
        return ;
    }

    node* n=new node(val);
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
    n->prev=temp;
}

void diaplay(node* &head){
    node* t=head;
    while(t!=NULL){
        cout<<t->data<<"->";
        t=t->next;
    }
}

void deleteAthead(node* &head){
    node* t=head;
    head=t->next;
    head->prev=NULL;

    delete t;
}

void deletion(node* &head,int pos){

    if(pos==1){
        deleteAthead(head);
        return ;
    }
    node* t=head;
    int c=1;

    while(t!=NULL && c<pos){
        t=t->next;
        c++;
    }
    t->prev->next=t->next;
    if(t->next!=NULL){
        t->next->prev=t->prev;
    }

    delete t;

}
int main()
{
    node* head=NULL;
    insertatHead(head,2);
    insertatHead(head,3);
    insertatHead(head,4);
    insertatHead(head,5);
    insertatTail(head,78);
    diaplay(head);
    cout<<endl;
    deletion(head,3);
    diaplay(head);
    return 0;

}