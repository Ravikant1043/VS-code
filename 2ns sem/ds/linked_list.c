#include <stdio.h>
#include <stdlib.h>
struct node
{
    int v;
    struct node *next;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct node *a, *b, *c;
    b = 0;
    while (n--)
    {
        a = (struct node *)malloc(sizeof(struct node));
        printf("Enter the first value");
        scanf("%d", &a->v);
        a->next = 0;
        if (b == 0)
        {
            a = b;
            b = c;
        }
        else
        {
            c->next = a;
            c = a;
        }
    }
    c = b;
    while (c != 0)
    {
        printf("%d ", c->v);
        c = c->next;
    }
    return 0;
}