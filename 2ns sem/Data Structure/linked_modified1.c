#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *n;
};
typedef struct node node;
node *head,*new,*temp;
void insert(int a)
{
    new=(node *)malloc(sizeof(node));
    new->data = a;
    new->n = 0;
    if (head==0)
    {
        temp=head=new;
    }
    else{
        while(temp->n!=0)
        temp=temp->n;
        temp->n=new;
    }
}

void display()
{
    temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->n;
    }
    printf("\n");
}

void delete()
{

}

int main()
{
    char c;
    int val;
    printf("chosse the options as per the need\n");
    while(1)
    {
        printf("1 for insert\t2 for deleting\t3 for display\t4 for break\n");
        scanf("%c",&c);
        if(c=='1')
        {
            scanf("%d",&val);
            insert(val);
        }
        else if(c=='2')
        {
            delete();
        }
        else if(c=='3')
        {
            display();
        }
        else if(c=='4')
        {
            break;
        }
    }
    return 0;
}