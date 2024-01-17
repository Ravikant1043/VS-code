// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i,j=0;
//     char s[100],t[100];
//     scanf("%[^\n]s",s);
//     for(i=0;s[i]!='\0';i++)
//     {
//         if(s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='I'||s[i]=='i'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
//         {
//             t[j]=s[i];
//             s[i]=1;
//             j++;
//         }
//     }
//     t[j]='\0';
//     strrev(t);
//     j=0;
//     for(i=0;s[i]!='\0';i++)
//     {
//         if(s[i]==1)
//         {
//             s[i]=t[j];
//             printf("%c",s[i]);
//             j++;
//         }
//         else
//         printf("%c",s[i]);
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j=0,k=0;
    char s[100],t[100],p[100];
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='I'||s[i]=='i'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            t[j]=s[i];
            s[i]=1;
            j++;
        }
    }
    t[j]='\0';
    k=strlen(t);
    for(i=k;k>=0;k--)
    {
        p[i]=t[k];
        p++;
    }
    p[i]='\0';
    j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==1)
        {
            s[i]=p[j];
            printf("%c",s[i]);
            j++;
        }
        else
        printf("%c",s[i]);
    }
    return 0;
}