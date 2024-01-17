#include<stdio.h>
int main()
{
    char s[20],b[100];
    int i,k=0;
    scanf("%[^\n]s",s);
    for (i=0;s[i]!='\0';i++)
    {
        if (s[i]=='.')
        {
            b[k++]='[';
            b[k++]='.';
            b[k++]=']';
        }
        else
        b[k++]=s[i];
    }
    b[k]='\0';
    for(i=0;b[i]!='\0';i++)
    printf("%c",b[i]);
    return 0;
}