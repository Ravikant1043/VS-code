#include <stdio.h>
int isoper(char ch)
{
    switch (ch)
    {
    case '+':
        return 1;
    case '-':
        return 1;
    case '*':
        return 2;
    case '/':
        return 2;
    default:
        return 0;
    }
}
int top = -1;
char infix[100], st[100], post[100];
void infix_postifx(char *tp)
{
    int i = 0, k = 0;
    char ch;
    for (i = 0; tp[i] != '\0'; i++)
    {
        if (isoper(tp[i]))
        {
        R:
            if (top == -1)
                st[++top] = tp[i];
            else
            {
                if (isoper(tp[i]) > isoper(tp[top]))
                    st[++top] = tp[i];
                else
                {
                    ch = st[top--];
                    post[k++] = ch;
                    goto R;
                }
            }
        }
        else
        {
            post[k++] = tp[i];
        }
    }
    for (i = top; i >= 0; i--)
    {
        post[k++] = st[i];
    }
}
int main()
{
    scanf("%[^\n]s", &infix);
    infix_postifx(infix);
    printf("%s", post);
    return 0;
}