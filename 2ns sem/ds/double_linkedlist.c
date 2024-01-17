#include<stdio.h>
#include<stdlib.h>
struct me{
    int val;
    struct me *next;
    struct me *prev;
};
void rev *(int *head)
{
    struct me *t,*y;
    t=head;
    while(t!=0)
    {
        y=t->prev;
        t->prev=t->next;
        t->next=y;
        t=t->prev;
    }
    head=t;
    // return t;
}
int main()
{
    int k=5; 
    struct me *h,*n,*p,*t;
    h=0;
    while(k)
    {
        k--;
        printf("Enter the element\n");
        t=(struct me *)malloc(sizeof(struct me));
        scanf("%d",&t->val);
        t->next=0;
        t->prev=0;
        if (h==0)
        h=n=t;
        else{
    
            n->next=t;
            t->prev=n;
            n=t;
        }
    }
    t=h;
    while(t!=0)
    {
        printf("%d ",t->val);
        t=t->next;
    }
    return 0;
}