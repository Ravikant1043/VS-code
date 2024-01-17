#include<stdio.h>
int main()
{
    int a=1,i,m=1;
    char s[30];
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
       { a++; 
       if(m<a)
           m=a;
       }
        else
        a=1;
    }
    printf("%d",m);
    return 0;
}