#include<stdio.h>
int main()
{
    int i,j,c=0,m=1;
    char s[100];
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {c=1;
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]==s[j+1])
            c++;
        }
        if(c>m)
        m=c;
    }
    printf("%d",m);
}