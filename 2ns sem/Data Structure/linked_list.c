#include<stdio.h>
struct Node {
    int data;
    struct Node *next;
};
typedef struct Node Nodes;
Nodes *head; 
void insert(int val)
{
    Nodes *nn,*temp;
    nn=(Nodes *)malloc(sizeof(Nodes));
    nn->data=val;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
    }
    else{
        temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next==nn;
    }
}
void display()
{
    Nodes *temp;
    if(head==NULL)
    printf("No Nodes\n");
    else{
        temp=head;
        while(temp!=Null)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int delete()
{
    if(head==Null)
    return -1;
    if(head->next==Null){
        val=head->data;
        head=NULL;
        return val;
    }
    temp=head;
    while(temp->next->next!=Null)
    {
        temp=temp->next;
    }
    
}
    int main()
{
    int ch,val;
    while(1)
    {
        printf("1.insert  2.delete  3.display  4.exit");
        scanf("%d",&ch);
        if(ch==1)
        {
            scanf("%d",val);
            insert(val);
            // insert
        }
        else if(ch==2)
        {
            val=delete();
            if(val==-1)
            {

            }
            // delete
        }
        else if (ch==3)
        {
            display();
            // display
        }
        else{
            break;
        }
    }
}