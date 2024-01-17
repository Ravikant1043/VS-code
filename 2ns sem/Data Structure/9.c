#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m,t;
    char a[10],b[10];
    scanf("%[^\n]s\n",a);
    scanf(" %[^\n]s\n",b);
    strcat(a,b);
    t=strlen(a);
     for(i=0;i<t-1;i++)
    {m=0;
        for(j=0;j<t-1;j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                m = 1;
            }
        }
        if(m==0)
        break;
    }
    printf("%s",a);
    return 0;
}