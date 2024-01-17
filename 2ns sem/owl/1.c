// time complexity  
#include<stdio.h>
#include<stdlib.h>
struct node {
    int val;
    struct node *next;
};
int main() 
{
    int i=0,n;
    // printf("Enter the number of nodes");
    scanf("%d",&n);
    struct node *head,*new,*temp;
    head=0;
    while(i<n)
    {
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->val);
        new->next=0;
        if(head==0)
        head=temp=new;
        else
        {
            temp->next=new;
            temp=new;
        }
        i++;
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->val);
        temp=temp->next;
    }
    return 0;
}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
int d=0,n=0,i;
    struct Listnode *p,*t,*k;
    while(p!=0)
    {
        d=d*10+ (l1->val);
        l1=l1->next;
    }
    while(t!=0)
    {
        n=n*10+(l2->val);
        l2=l2->next;
    }
    d+=n;
    t=0;
    p=0;
    // p=(struct Listnode*)(malloc(sizeof(struct Listnode)))
    while(d)
    {    
        k=(struct Listnode *)malloc(sizeof(struct ListNode));
    
        k->val=d%10;
        if(t=0)
            t=p=k;
        else
        { 
            p->next=k;
            p=k;
        }
        d/=10;
    }
    return t;
}