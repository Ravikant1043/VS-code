#include<stdio.h>
int main()
{
    int i,sum=0;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            sum+=(s[i]);
        }
    }
    printf("%d",sum);
    return 0;
}