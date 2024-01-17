struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
int d=0,n=0,i;
    struct ListNode *p,*t,*k;
    p=l1;
    // t=l2;
    
    while(p)
    {
        d=d*10 + (p->val);
        p=p->next;
    }
   
    while(l2)
    {
        n=n*10+(l2->val);
        l2=l2->next;
    }
    d+=n;
    t=0;
    // p=0;
    // printf("%d",d);
    // p=(struct Listnode*)(malloc(sizeof(struct Listnode)))
    while(d)
    {    
        k=(struct ListNode *)malloc(sizeof(struct ListNode));
        (k->val)=(d%10);
        if(t==0)
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


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
}